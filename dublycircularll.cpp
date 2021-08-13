#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node* next;
    struct node *prev;

}NODE,*PNODE;

class Doublycl
{
    private:

    PNODE Head;
    PNODE Tail;

    int isize;

    public:

    Doublycl()
    {
        Head=NULL;
        Tail=NULL;
        isize=0;

    }

    void insertFirst(int);
    void insertLast(int);
    void insertatpos(int ,int);
    void DeleteFirst();
    void DeleteLast();
    void Deleteatpos(int);
    void Display();
    int count();
};

void Doublycl:: insertFirst(int ino)
{
    PNODE newn=NULL;

    newn=new NODE;
    newn->data=ino;
    newn->next=NULL;
    newn->prev=NULL;

    if(isize==0)  // if(Head==NULL)&&(Tail==NULL)
    {
        Head=newn;
        Tail=newn;


    }

     else{
          newn->next=Head;
            Head->prev=newn;
            Head=newn;
    


     }
     Tail->next=Head;
     Head->prev=Tail;
     isize++;

}
void Doublycl::insertLast(int ino)
{
    PNODE newn=NULL;

    newn=new NODE;
    newn->data=ino;
    newn->next=NULL;
    newn->prev=NULL;

    if(isize==0)  // if(Head==NULL)&&(Tail==NULL)
    {
        Head=newn;
        Tail=newn;


    }

     else{
          
          Tail->next=newn;
          newn->prev=Tail;
          Tail=newn;
           }
     Tail->next=Head;
     Head->prev=Tail;
     isize++;


}
void Doublycl::insertatpos(int no,int pos)
{
    
    if(pos<1 || pos>isize+1)
    {
        return ;

    }
    if(pos==1)
    {
        insertFirst(no);

    }
    else if(pos==isize+1)
    {

        insertLast(no);
    }
    else
    {
        PNODE newn=new NODE;

        PNODE temp=Head;

        newn->data=no;
        newn->next=NULL;
        newn->prev=NULL;

        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;

        }

        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev =temp;
        isize++;
    }
}
void Doublycl::DeleteFirst()
{
    if(isize==0)
    {
        return ;

    }
    else if(isize==1)
    {
        delete Head;
        Head=NULL;
        Tail=NULL;
        isize=0;

    }
    else{

   Head=Head->next;
   delete(Tail->next);
   Tail->next=Head;
   Head->prev=Tail;
   isize--;

    }

}
void Doublycl::DeleteLast()
{
     if(isize==0)
    {
        return ;

    }
    else if(isize==1)
    {
        delete Tail;
        Head=NULL;
        Tail=NULL;
        isize=0;

    }
    else
    {

        Tail=Tail->prev;
        delete(Head->prev);
        Head->prev=Tail;
        Tail->next=Head;
        isize--;
        
    }

}
void Doublycl::Deleteatpos(int pos)
{
    if(pos<1 || pos>isize)
    {
        return;

    }
    if(pos==1)
    {
        DeleteFirst();

    }
    if(pos==isize)
    {
        DeleteLast();

    }
    else
    {
        PNODE temp=Head;

        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;


        }
        temp->next=temp->next->next;
        delete(temp->next->prev);
        temp->next->prev=temp;
        isize--;

    }

}
void Doublycl::Display()
{
    PNODE temp=Head;

for(int i=1;i<=isize;i++)
{
   std:: cout<<temp->data<<"\t";
    temp=temp->next;
    

}
std::cout<<"\n";

}
int Doublycl::count()
{
    return isize;


}

int main()
{
    int ichoice=1,ino=0,iret=0,ipos=0;

    Doublycl obj;

    while(ichoice!=0)
    {
        std::cout<<"enter your choice:\n";
       std::cout<<"1: insert first\n";
       std:: cout<<"2: insert last \n";
        std::cout<<"3: insert at pos \n";
       std:: cout<<"4: Delete first\n";
        std::cout<<"5: Delete last\n";
       std:: cout<<"6: Delete at position\n";
       std:: cout<<"7: Display the elements\n";
       std:: cout<<"8: count the number of elements\n";
        std::cout<<"0: exite the code\n";

        std::cout<<" enter your choie\n";
        cin>>ichoice;


        switch(ichoice)
        {
            case 1:
           std:: cout<<"enter the element to insert";
            cin>>ino;
           obj. insertFirst(ino);
             break;

             case 2:
            std:: cout<<"enter the number to insert\n";
             cin>>ino;
            obj. insertLast(ino);
            break;

            case 3:
           std:: cout<<"enter the data to insert\n";
            cin>>ino;
           std:: cout<<"enter the position\n";
            cin>>ipos;
             obj.insertatpos(ino,ipos);
             break;

             case 4:
             obj.DeleteFirst();

             break;

             case 5:
             obj.DeleteLast();
             break;

             case 6:
            std:: cout<<"enter the position to delete\n";

             obj.Deleteatpos(ipos);
                break;
            case 7:
          std::  cout<<"elements are\n";
            obj.Display();
            break;

            case 8:
            iret=obj.count();
           std:: cout<<"number of elements are:"<<iret<<"\n";
            break;

            case 0:
           std:: cout<<"thenk you for using kmw's dcll\n";
            break;


            default:

           std:: cout<<"enter the valid number\n";
            break;
            }
    }
    return 0;

}