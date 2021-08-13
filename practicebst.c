#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;

}NODE,*PNODE,**PPNODE;

void insertnode(PPNODE head,int no)
{ 
    PNODE temp=*head;
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->lchild=NULL;
    newn->rchild =NULL;

    if(NULL==*head)
    {
        *head=newn;
     }

     else
     {
         while(1)
         {
             if(no>temp->data)
             {
                 if(temp->rchild==NULL)
                 {
                     temp->rchild=newn;
                     break;

                 }
                 temp=temp->rchild;

             }
             else if(no<temp->data)
             {
                 if(temp->lchild==NULL)
                 {
                     temp->lchild=newn;
                     break;
                 }
                 temp=temp->lchild;
             }

             else if(no==temp->data)
             {
                 printf("it is duplicate element\n");
                 free(newn);
                 break;


             }
         }
     }


}
void inorder(PNODE head)
{

    if(head!=NULL)
{
    inorder(head->lchild)
    printf("%d\t",head->data);
    inorder(head->rchild);

}
}
void preorder(PNODE head)
{

     
}

int main()
{


    return 0;

}