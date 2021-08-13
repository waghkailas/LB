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

void Display(PNODE Head)
{
    while(Head!=NULL)
    {
        printf("%d\n",Head->data);
        Head=Head->next;

    }

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

void Reverse(PPNODE Head)
{
    PNODE Next=NULL,Prev=NULL,Current=*Head;
    if(*Head==NULL)
    {
        return ;
    }
    while(Current!=NULL)
    {
        Next=Current->next;
        Current->next=Prev;
        Prev=Current;
        Current=Next;

    }
    *Head=Prev;

}
int main()
{ 
    PNODE First=NULL;
InsertFirst(&First,51);
InsertFirst(&First,21);
 InsertFirst(&First,11);
 //InsertFirst(&First,101);
 //InsertFirst(&First,111);
 int iret=0;
 Display(First);
 iret=count(First);

 printf("Numer of nodes are:%d\n",iret);
 Reverse(&First);
 Display(First);
 


return 0;

}