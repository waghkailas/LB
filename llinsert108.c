#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node** PPNODE;

void Insert( PPNODE *Head,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;


    if( * Head==NULL)
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
        printf(" %d\n",Head->data);
        Head=Head->next;

    }
}


int main()
{
    PNODE First=NULL;
    Insert(&First,11);
        Insert(&First,51);
          Insert(&First,2);
          Display(First);
           return 0;
}

