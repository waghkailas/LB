#include<iostream>
using namespace std;
 class stack
 {
     private:
     int *Arr;
     int isize;
     int top;

     public:
     stack(int);
     ~stack();
     void push(int);
     int pop();
     void Display();

 };
 stack:: stack(int no)
 {
     isize=no;
     top=-1;
     Arr=new int[isize];

 }
 stack::~stack()
 {
     delete[]Arr;

 }

 void stack::push(int no)
 {
     if(top==isize-1)
     {
         cout<<"stack is full\n";

     }
     else
     {
         top++;
         Arr[top]=no;

     }
     
 }
 int stack::pop()
 {
     if(top==-1)
     {
         cout<<"stack is empty\n";
         return -1;

     }
     else
     {
         int no=Arr[top];
         top--;
         return no;

     }
 }
 void stack:: Display()
 {
     if(top==-1)
     {
         cout<<"stack is empty\n";

     }
     else
     {
         for(int i=0;i<=top;i++)
         {
             cout<<Arr[i]<<"\t";

         }
         cout<<"\n";

     }
 }
 
 int main()
 {
     int no=0,iret=0;

     cout<<"enter the size of array\n";
     cin>>no;
      stack obj(no);
      obj.push(11);
      obj.push(21);
      obj.push(51);
      obj.push(101);
      obj.Display();
      iret=obj.pop();
        cout<<"poped element is :"<<iret<<"\n";
        obj.Display();
        return 0;

 }