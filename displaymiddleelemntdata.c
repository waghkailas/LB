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

int middleelement(PNODE Head )
{
  /*  PNODE temp1=(Head);
    PNODE temp2=(Head);
    while(temp2!=NULL)
    {
        temp2=temp2->next->next;
        temp1=temp1->next;

    }
    return temp1->data;
    */

   PNODE temp=NULL;
   if(Head==NULL)
   {
       return -1;
   }
   temp=Head->next;

   while((temp!=NULL)&&(temp->next!=NULL))
   {
       temp=temp->next->next;
       Head=Head->next;

    }
    return Head->data;
}
int main()
{ 
    PNODE First=NULL;
InsertFirst(&First,51);
InsertFirst(&First,21);
 InsertFirst(&First,11);
 InsertFirst(&First,101);
 InsertFirst(&First,111);
 int iret=0;
 Display(First);
 iret=count(First);

 printf("Numer of nodes are:%d\n",iret);
 iret=middleelement(First);
 printf("middle elemnt data is %d",iret);


return 0;

}