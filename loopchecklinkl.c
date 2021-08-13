#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

 
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
bool checkloop(PNODE Head)
{ 
    PNODE temp=Head;
    while((temp!=NULL)&&(Head!=NULL)&&(temp->next!=NULL))
    {
        temp=temp->next->next;
        Head=Head->next;
        if(Head==temp)
        {
            return true;
        }

    }
    return false;
}
int main()
{ 
    bool bret;

    PNODE First=NULL;
    PNODE third=NULL,Last=NULL;
InsertFirst(&First,51);
InsertFirst(&First,21);
 InsertFirst(&First,11);
 InsertFirst(&First,101);
 InsertFirst(&First,111);
 int iret=0;
 Display(First);
 third=First->next->next;
 Last=third->next->next;
 Last->next=third;

 iret=count(First);

 printf("Numer of nodes are:%d\n",iret);

 bret= checkloop(First);
 if(bret==true)
 {
     printf("there is a loop");


 }
 else
 {
     printf("there is no loop");

 }



return 0;

}