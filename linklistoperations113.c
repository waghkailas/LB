#include<stdio.h>
#include<stdlib.h>

struct node
{

    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node**PPNODE;

void insertFirst(PPNODE head,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if(NULL==*head)
    {
      *head=newn;

    }

    else{
        newn->next=*head;
        *head=newn;

    }

}

void insertLast(PPNODE head,int no)
{

    PNODE newn=NULL;
    PNODE temp=*head;


    newn=(PNODE)malloc(sizeof(NODE));
      newn->data=no;
      newn->next=NULL;

    if(NULL==*head)
    {
        *head=newn;

    }
    else{

        while(temp->next!=NULL)
          {
              temp=temp->next;

          }

          temp->next=newn;

    }
     
}

void Display(PNODE head)
{
    while(head!=NULL)
    {
        printf("|%d|->",head->data);

        head=head->next;


    }
    printf("NULL\n");
}

int count(PNODE head)
{
    int icnt=0;

    while(head!=NULL)
    {
        icnt++;
        head=head->next;

    }
}

void DeleteFirst(PPNODE head)
{
    
    PNODE temp=*head;

    if(*head==NULL)
    {
       return ;

    }
    if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;


    }
    else
    {
        (*head)=(*head)->next;
        free(temp);

        
    }
}
void DeleteLast(PPNODE head)
{

    PNODE temp=*head;
    if(*head==NULL)
    {
        return;

    }
    else if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;


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

void insertposition(PPNODE head,int no,int ipos)
{
    PNODE newn=*head;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

   int  size=count(head);


    if(ipos<0 || ipos>size+1)
    {
        return;

    }
    
}



int main()
{
    PNODE First;


}