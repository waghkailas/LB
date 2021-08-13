#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;

}NODE,*PNODE;

class stack
{
    private:

    PNODE head;
    int isize;

    public:
    stack();  // constructer
    ~stack(); // Destructer
    void push(int); // void insertFirst(int)
    int pop();  // void DeleteFirst();

    void Display();  
       int count();

};

stack::stack()  // constructer
{
    cout<<" inside constructer\n";

    this->head=NULL;
    this->isize=0;


}

stack::~stack() // Destructer
{
    cout<<" inside the destructer\n";


}
void stack::push(int no)
{
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;

    newn->next=head;
    head=newn;
    isize++;

}
int stack:: pop()
{
    int iret=-1;
    if(isize==0)
    {
        cout<<"stack is empty\n";

        
     }
    else
    {
        PNODE temp=head;
        head=head->next;
        iret=temp->data;

        delete temp;
        isize--;

    }
    return iret;

}
void stack::Display()
{
    PNODE temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;

    }
    cout<<"\n";

}
int stack::count()

{

    return this->isize;
}



int main()
{
    stack *sobj=new stack;  // stcak sobj  implicitely calls the constructer;

    int ioption=1,iret=0,ino=0;


    while(ioption!=5)
    {
        cout<<"please enter the option\n";
        cout<<"1:push the element\n";
        cout<<"2: pop the element\n";
        cout<<"3:display the elements\n";
        cout<<"4: count the number of elememts\n";
        cout<<"5: Exite the application\n";
        cin>>ioption;


        switch(ioption)
        {

            case 1:
            cout<<"enter the elements to push\n";
            cin>>ino;
            sobj->push(ino);
            break;

            case 2:
            iret=sobj->pop();
            cout<<"poped element is:"<<iret<<"\n";
            break;

            case 3:
            cout<<"elemet of stack are\n";
            sobj->Display();
            break;

            case 4:
            iret=sobj->count();
            cout<<"number of elements are\n"<<iret<<"\n";
              break;
            case 5:
            cout<<" thank you for using aplication\n";
            delete sobj; // it implicitely calls the destructer

            break;
            default:
            cout<<"please enter the valid number\n";
            break;


        }
    }

   return 0;
}