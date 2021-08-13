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

    newn=(PNODE)malloc(sizeof(int ));
    newn->data=no;
    newn->lchild=NULL;
    newn->rchild=NULL;

        if(*head==NULL)
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
                    printf("duplicate element\n");
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
        inorder(head->lchild);
        printf("%d\t",head->data);
        inorder(head->rchild);

    }
}

void postorder(PNODE head)
{
    if(head!=NULL)
    {
        postorder(head->lchild);
        postorder(head->rchild);
        printf("%d\t",head->data);

    }
} 

void preorder(PNODE head)
{
    if(head!=NULL)
    {
        printf("%d\t",head->data);
        preorder(head->lchild);
        preorder(head->rchild);

    }
}

void count(PNODE head, int *p)
{
   // static int icnt=0;   
    if(head!=NULL)
    {
        *p++;
        count(head->lchild,p);
        count(head->rchild,p);

    }
   // return icnt;

}

int main()
{
    PNODE root=NULL;
    int i=0;

    int ichoice=1;
    int ino=0;
    int iret=0;

    while(ichoice!=0)
    {
        printf("\n1:insert node\n");
        printf("2:Display inorder\n");
        printf("3:Display preorder\n");
        printf("4:Display postoeder\n");
        printf("5:count the nodes\n");
        printf("0:terminate the application\n");
        printf("enter your choice\n");
        scanf("%d",&ichoice);

        switch(ichoice)
        {
            case 1:
            printf("enter the roll no\n");
            scanf("%d",&ino);
            insertnode(&root,ino);
            break;

            case 2:
            printf("inorder traversal\n");
            inorder(root);
            break;

            case 3:
            printf("preorder traversal\n");
            preorder(root);
            break;

            case 4:
            printf("postorder traversal\n");
            postorder(root);
            break;
            case 5:
            count(root,&i);
            printf("number of nodes are: %d\n",i);
            break;
            case 0:
            printf("thankyou for usingn kmw's application\n");
            break;

            default:
            printf("please enter the proper option\n");
            break;


        }

    }
    return 0;

}