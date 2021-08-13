#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;

} NODE,*PNODE;

class Queue
{

    private:

    PNODE head;
    int isize;

    public:
    Queue();
    void Display();
    int count();
    void enqueue(int);
    int dequeue();


};

Queue::Queue()
{
    head=NULL;
    isize=0;


}
void Queue::Display()
{
    PNODE temp=head;
    cout<<"element of the queue\n";
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;


    }
    cout<<"\n";

}
int Queue::count()
{
    return isize;

}
void Queue::enqueue(int no)
{
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;

    if(head!=NULL)
    {
        head=newn;

    }
    else
    {
    PNODE temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=newn;

    }
    isize++;


}
int Queue::dequeue()
{

    if(head==NULL)
    {
        cout<<"queue is empty\n";
        return -1;

    }
    else
    {
        int no=head->data;
        PNODE temp=head;
        head=head->next;
        delete temp;
        isize--;

        return no;

    }
}
int main()
{

    Queue obj;

    int ichoice=1,no=0,iret=0;

    while(ichoice!=0)
    {

        cout<<"1: insert the element\n";
                cout<<"2: delete the element\n";
        cout<<"3: Display the element\n";
                cout<<"4: count the element\n";
                        

        cout<<"0: exite\n";
        cout<<"enter the choice\n";
        cin>>ichoice;
        

        switch(ichoice)
        {
            case 1:
            cout<<"enter the element to insert\n";
            cin>>no;
            obj.enqueue(no);
            break;

            case 2:

            iret=obj.dequeue();
            cout<<"removed the elemnt"<<iret<<"\n";
            break;
            case 3:
             obj.Display();
             break;
             case 4:
             iret=obj.count();
             cout<<"number of elemnt are:"<<iret<<"\n";
             break;

             case 0:
             cout<<" thank you\n";
             break;

             default:
             cout<<" enter the correct element\n";
             break;

        }





    }
    
return 0;
}
