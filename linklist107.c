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
int main()
{ 
    PNODE First=NULL;
InsertFirst(&First,51);
InsertFirst(&First,21);
 InsertFirst(&First,11);
 int iret=0;
 Display(First);
 iret=count(First);

 printf("Numer of nodes are:%d\n",iret);
return 0;

}