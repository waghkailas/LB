#include<iostream>
using namespace std;

class array
{

    private:

    int *Arr;
    int isize;

    public :
    array(int);
    ~array();
    void accept();
    void Display();
   // void count();
    int evenposadd();

};

array::array(int no)
{cout<<"inside the constructer\n";

    isize=no;
    Arr=new int[isize];

}
array::~array()
{
    delete[]Arr;


}

void array::accept()
{
    cout<<"enter the number\n";
    for(int i=0;i<isize;i++)
    {
        cin>>Arr[i];
    }
}

void array:: Display()
{
    cout<<"array elements are\n";

    for(int i=0;i<isize;i++)

    {
        cout<<Arr[i]<<"\t";

    }
    cout<<"\n";

}
int array::evenposadd()
{
    int isum=0;


    for(int i=0;i<isize;i++)
    {
        if(i%2==0)
        {
            isum=isum+Arr[i];

        }
    }
    return isum;

}




int main()
{
    int ino=0;

    cout<<"enter the number of elements\n";
    cin>>ino;
    array *obj=new array(ino);
    obj->accept();

    obj->Display();

    int iret=obj->evenposadd();
    cout<<"addition of numbers at even position:"<<iret<<"\n";
        
        delete obj;

      return 0;
}