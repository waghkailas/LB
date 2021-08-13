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

void Insert(PPNODE Head,int no)

{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

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

int count(PNODE Head) 
{
    int icnt;

    while(Head!=NULL)
    {
        icnt++;
        Head=Head->next;

    }
    return icnt;
}


int main()
{
    

      PNODE first=NULL;
      Insert(&first,11);
      Insert(&first,21);
      Insert(&first,51);

      int iret=0;

      iret=count(first);
      printf("%d",iret);



      
    
    return 0;

}