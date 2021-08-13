// accept N numbers from user and perform the addition of that n numbers
#include<iostream>
using namespace std;

class Array
{
    private:

    int *Arr;
    int isize;


    public :

    Array(int);
    ~Array();
    void Accept();
    void Display();
    int Addition();

};
Array :: Array(int no)
{
    cout<<"inside constructer\n";

    isize=no;
    Arr=new int [isize];

}
Array::~Array()
{
    cout<<"inside destructer\n";

    delete[]Arr;

}
void Array::Accept()
{
    cout<<"enter the elemnts\n";
    for(int i=0;i<isize;i++)
    {
        cin>>Arr[i];

    }
}

void Array :: Display()
{
    cout<<"elements of array are\n";
    for(int i=0;i<isize;i++)
    {
        cout<<Arr[i]<<"\t";

    }
    cout<<"\n";

}
int Array::Addition()
{
    int isum=0;
    for(int i=0;i<isize;i++)
    {
        isum=isum+Arr[i];

    }
    return isum;

}
int main()
{
    int no=0;
    cout<<"enter the size of array\n";
     cin>>no;
    Array *obj=new Array(no); // call to the constructer
    obj->Accept();
    obj->Display();
   int iret=obj->Addition();
    cout<< "addition of all elements:\n"<<iret<<"\n";
      
      delete obj; // call to the destructer


    return 0;

}