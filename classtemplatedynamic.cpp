#include<iostream>
using namespace std;

template<class T>
class Array
{

    private:
    T *arr;
    int isize;

    public:

    Array(int no)
    {
        isize=no;
        arr=new T[isize];

    }
    ~Array()
    {
        delete[]arr;
    }

    void accept()
    {
        cout<<"enter the vales\n";
        for(int i=0;i<isize;i++)
        {
            cin>>arr[i];

        }

    }
    T maximum()
    {
        T max=arr[0];

        for(int i=0;i<isize;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];

            }
        }
        return max;
    }
    
};
int main()
{
   int iret=0;
   int ino=0;
   cout<<"enter the elements\n";
   cin>>ino;
   Array<int>*obj=new Array<int>(ino);

   obj->accept();
   iret=obj->maximum();
   cout<<"max element is:"<<iret;
   return 0;
   
   }