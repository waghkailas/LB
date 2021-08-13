#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

typedef  struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void insertFirst(PPNODE Head,int no)
{
    PNODE newn =NULL;
    newn =(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;


    }
    else
    {
        newn->next=*Head;
        *Head=newn;

    }
}

void insertLast(PPNODE Head,int no)
{
    PNODE newn =NULL;
    PNODE temp=*Head;

    newn =(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
        

    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        } 
        temp->next=newn;


    }
}
void Display(PNODE Head)
{
    while(Head!=NULL)
    {
        printf("|%d|->",Head->data);
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
    PNODE temp=*Head;
    if(*Head==NULL)
    {
        return;

    }
    else if((*Head)->next==NULL)
    {
        free(*Head);
        *Head=NULL;

    }
    else{
        *Head=(*Head)->next;   
        free(temp);
    }

}
void DeleteLast(PPNODE Head)
{
    PNODE temp=*Head;
    if(*Head==NULL)
    {
        return;

    }
    else if((*Head)->next==NULL)
    {
        free(*Head);  
        *Head=NULL;

    }
    else{
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
    int isize=0;
    PNODE newn=NULL;
    PNODE temp=*Head;


    isize=count(*Head);

    if((ipos<1)|| (ipos>isize+1))
    {
        return;

    }
    if(ipos==1)
    {
        insertFirst(Head,no);

    }
    else if(ipos==isize+1)
    {
        insertLast(Head,no);

    }
    else{
        int icnt=1;
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;

        while(icnt<ipos-1)
        {
            temp=temp->next;
            icnt++;

        }
        newn->next=temp->next;
        temp->next=newn;



    }
}

void DeletePosition(PPNODE Head,int ipos)
{
    int isize=0;
    
    PNODE temp=*Head;
    PNODE target=NULL;



    isize=count(*Head);

    if((ipos<1)|| (ipos>isize))
    {
        return;

    }
    if(ipos==1)
    {
        DeleteFirst(Head);

    }
    else if(ipos==isize+1)
    {
        DeleteLast(Head);

    }
    else{
        int icnt=1;
        
        while(icnt<ipos-1)
        {
            temp=temp->next;
            icnt++;

        }
        target=temp->next;
        temp->next=target->next;
        free(target);
     }
}

int main()
{
    PNODE First=NULL;
    int iret=0,ioption=1,ivalue=0,ipos=0;
    while(ioption!=0)
    {
        printf("enter your action on linked list:\n");
        printf("1:insert at first position\n");
        printf("2:insert at last position\n");
        printf("3:insert at given position\n");
        printf("4:Delete first node\n");
         printf("5:Delete last node\n");
        printf("6:Delete at given position  node\n");
        printf("7:display the content of linked list\n");
        printf("8:count the numberv of nodes of linked list\n");
        printf("0: exite the applicstion\n");

        scanf("%d",&ioption);

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
            printf("enter data to insert\n");
            scanf("%d",&ivalue);
            printf("enter the position\n");
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
            printf("enter the position to delete data\n");
            scanf("%d",&ipos);
            DeletePosition(&First,ipos);
            break;


            case 7:
            Display(First);
             break;

            case 8:
            iret=count(First);
            printf("number of nodes are :%d\n",iret);
            break;

            break;
            case 0:
             printf("thank you for using kmw's appication \n");
             break;
            

            default:
            printf("enter the valid number\n");
            break;



        }//end of switch

    }//end of while


    return 0;

}//end of main   