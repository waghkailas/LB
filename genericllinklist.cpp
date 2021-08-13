#include<iostream>
using namespace std;
template <class T>
 struct node
{
    T data;
    struct node*next;

};


template<class T>
class singlyll
{
    private:
    struct node<T> *head;
    int isize;

public:
    singlyll();
    void Display();
    int count();
    void insertfirst(T);
};
template<class T>

 singlyll<T>::singlyll()
{
    head=NULL;
    isize=0;


}

template<class T>

void singlyll<T>::insertfirst(T no)
{
    struct node<T> *newn=NULL;
    newn=new struct node<T>;

    newn->data=no;
    newn->next=NULL;

    newn->next=head;
    head=newn;
    isize++;


}
template<class T>
int singlyll<T>::count()
{
    return isize;

}
template<class T>

void singlyll<T>::Display()
{
    struct node<T> *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;


    }
    cout<<"\n";


}
int main()
{
    singlyll<double>obj;
    obj.insertfirst(51.0);
    obj.insertfirst(21.0);
    obj.insertfirst(11.0);

    obj.Display();

    cout<<"length of list is :"<<obj.count()<<"\n";
    

    return 0;
}