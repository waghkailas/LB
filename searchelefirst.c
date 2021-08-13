#include<stdio.h>
#include<stdlib.h>

 
 typedef struct node
 {
     int data;
     struct node *next;

 }*PNODE,**PPNODE;

void insertFirst(PPNODE Head,int no)
{

    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(PNODE));

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
     PNODE newn=NULL;
     PNODE Temp=*Head;

    newn=(PNODE)malloc(sizeof(PNODE));

    newn->data=no;
    newn->next=NULL;
    if(*Head==NULL)
    {
        *Head=newn;

    }
    else
    {
        while(Temp->next!=NULL)
        {
            Temp=Temp->next;
        }
        (Temp)->next=newn;


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

 int Search(PNODE Head,int no )
 {
     
     int count=1;
      while(Head!=NULL)
    {
    
       if (Head->data==no)
       {
           break;
           

       }
       else{

       
        Head=Head->next;
        count++;
       }
    }
    return count;

 }
 int main()
 {
      PNODE First=NULL;
      insertLast(&First,80);
            insertFirst(&First,70);
      insertFirst(&First,60);
      insertFirst(&First,50);
      insertLast(&First,40);

      Display(First);
      int ret=0,no=0;
      printf("enter the number you want to serch\n");
      scanf("%d",&no);


     ret= Search(First,no);
     printf("element first occurs at %d\n",ret);




     return 0;

 }
