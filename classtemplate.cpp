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
    Array<int> obj(5);
    int iret=0;

    obj.accept();
    iret=obj.maximum();

    cout<<"max ele is:"<<iret<<"\n";


 Array<double> obj1(5);
    double dret=0;

    obj1.accept();
    dret=obj1.maximum();

    cout<<"max ele is:"<<dret<<"\n";


}