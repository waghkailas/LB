#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
struct node *next;
struct node *prev;  // +
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void insertFirst(PPNODE Head,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;   //+

    if(*Head==NULL)   // ll is empty  in company we use if(NULL==*Head)
    {
        *Head=newn;

    }
    else  // ll contains the node 
    {
        newn->next=*Head;
        (*Head)->prev=newn;  //+

        *Head=newn;

        
    }

}

void insertLast(PPNODE Head,int no)
{
    PNODE newn=NULL;
    PNODE temp=*Head;


    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;   //+

    if(*Head==NULL)   // ll is empty
    {
        *Head=newn;

    }
    else  // ll contains the node
    {
        while(temp->next!=NULL)
        {
            temp=temp->next ;

        }
        temp->next=newn;
        newn->prev=temp;
    }

}
void Display(PNODE Head)
{
    while(Head!=NULL)
    {
        printf("|%d|<=>",Head->data);
        Head=Head->next;

    }
    printf("NULL\n");

}
int count(PNODE Head)
{
    int icnt=0;
    while(Head!=NULL)
    {
        icnt++;
        Head=Head->next;

    }
   return icnt;
    
}

void DeleteFirst(PPNODE Head)
{

    if(*Head==NULL)  // no any node
    {
        return;
    }
    else if((*Head)->next==NULL)  // one node
    {
        free(*Head);
        *Head=NULL;
    }
    else     // more than one node
    {
         *Head=(*Head)->next;
           free((*Head)->prev);
           (*Head)->prev=NULL;
           }
}
void DeleteLast(PPNODE Head)
{
    PNODE temp=*Head;


    if(*Head==NULL)  // no any node
    {
        return;
    }
    else if((*Head)->next==NULL)  // one node
    {
        free(*Head);
        *Head=NULL;
    }
    else     // more than one node
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;

        }
        free(temp->next);
        temp->next=NULL;
    }
}

void insertPosition(PPNODE Head,int no,int ipos)
{
    int size=0;
    size=count(*Head);
    PNODE temp=*Head;
    PNODE newn =NULL;


    if((ipos<1) || (ipos>size+1))
    {
        return;


    }

    if(ipos==1)
    {
        insertFirst(Head,no);

    }
    else if(ipos==size+1)
    {
        insertLast(Head,no);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;
        newn->prev=NULL;

        for(int i=1;i<ipos-1;i++)
        {
            temp=temp->next;

        }
        newn->next=temp->next;
        temp->next->prev=newn;  //+
        temp->next=newn;
        newn->prev=temp; //+



    }
}

void DeletePosition(PPNODE Head,int ipos)
{
    int size=0;
    size=count(*Head);
    PNODE temp=*Head;
    


    if((ipos<1) || (ipos>size))
    {
        return;


    }

    if(ipos==1)
    {
        DeleteFirst(Head);

    }
    else if(ipos==size)
    {
        DeleteLast(Head);
    }
    else
    {
        

        for(int i=1;i<ipos-1;i++)
        {
            temp=temp->next;


        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;


        
        }
}
int lastoccurs(PNODE Head,int value)
{
    int ipos=0;
   int  icnt=1;
   if(Head==NULL)
   {
       return -1;

   }
   while(Head!=NULL)
   {
       if(Head->data==value)
       {
           ipos=icnt;

       }
       Head=Head->next;
       icnt++;

   }
   return ipos;

}


int main()
{
    PNODE First=NULL;
    int ioption=1,ivalue=0,iret=0,ipos=0;
    while(ioption!=0)
    {
        printf("**********************************************\n");
        printf("please select the option\n");
        printf("1:insert the node at first position\n");
        printf("2:insert the node at last position\n");
        printf("3:insert the node at given posotion\n");
        printf("4:Delete the first node\n");
        printf("5:Delete the last node\n");
        printf("6:Delete the node at position\n");
        printf("7:Display the contents of linked list\n");
        printf("8:count the nodes of linked list\n");
        printf("0:exite\n");
        scanf("%d",&ioption);
        printf("********************************************************\n");
          

        switch(ioption)
        {

            case 1:
            printf("enter data to insert\n");
            scanf("%d",&ivalue);
            insertFirst(&First,ivalue);
            break;

            case 2:
            printf("enter data to insert\n");
            scanf("%d",&ivalue);
            insertLast(&First,ivalue);
            break;

            case 3:
            printf("enter the data to insert\n");
            scanf("%d",&ivalue);
            printf("enter the position \n");
            scanf("%d",&ipos);
            insertPosition(&First,ivalue,ipos);
            
            break;

            case 4:
            DeleteFirst(&First);

            break;

            case 5:
            DeleteLast(&First);
            break;

            case 6:
                    printf("enter the [osition you want to delete\n");
                    scanf("%d",&ipos);
                    DeletePosition(&First,ipos);

            break;

            case 7:
            Display(First);

            break;

            case 8:
            iret=count(First);
            printf("number of nodes are %d \n",iret);
            break;

            case 0:
            printf("thank you for using kmw's dll\n");
            break;

            default:
            printf("enter the correct number\n");
            break;

        }
    }

return 0;
}