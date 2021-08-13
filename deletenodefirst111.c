#include<stdio.h>
#include<stdlib.h>

 
struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;
void InsertFirst(PPNODE Head,int no)
{
    PNODE newn=NULL;
    newn =(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if (*Head==NULL)
    {
        *Head=newn;

        
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
        }
    

}
void InsertLast(PPNODE Head,int no)
{

    PNODE newn=NULL;
    PNODE temp=*Head;

    newn =(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if (*Head==NULL)
    {
        *Head=newn;

        
    }
    else
    {
        while(temp->next!=NULL)
        {

            temp= temp->next;

        }
        temp->next=newn;


        
    }
   
}

void Display(PNODE Head)
{
    while(Head!=NULL)
    {
        printf("|%d|->\t",Head->data);
        Head=Head->next;

    }
    printf("NULL");

}
void Deletefirst(PPNODE Head)
{
    PNODE temp=*Head;

    if(*Head==NULL)   // if ll is empty
    
    {
        return ;

    }
    else if((*Head)->next==NULL)
    {
        free(*Head);  // delete the first node
        *Head=NULL;    // set NULL into the first
    }
    else   /// if ll contains more than one node
    
    {
        *Head=(*Head)->next;
        free(temp);


    }

}
void DeleteLast(PPNODE Head)
{ 
    PNODE temp=*Head;

    if(*Head==NULL)  //  if ll is empty
    {
        return;

    }
    else if((*Head)->next==NULL)
    {
        free(*Head);  // delete the first node
        *Head=NULL;    //set NULL to first
    }
    else   //if ll contains more than one node 
    {
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;

        

    }

}
int main()
{ 
    PNODE First=NULL;
    InsertFirst(&First,51);
InsertFirst(&First,21);
 InsertFirst(&First,11);
InsertLast(&First,51);
InsertLast(&First,41);
InsertLast(&First,12);
printf("nodes after insert\n");
 Display(First);

 Deletefirst(&First);
 printf("\nnodes after delete first\n");
 Display(First);
 DeleteLast(&First);
 printf("\nnodes after delete last\n");
 Display(First);


return 0;

}