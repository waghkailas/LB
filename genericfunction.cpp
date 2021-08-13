#include<iostream>
using namespace std;
 template<class T>

T MaximumG(T Arr[],T isize)
{

    T imax=Arr[0];
    for(T i=0;i<isize;i++)
    {

    
    if(Arr[i]>imax)
    {
        imax=Arr[i];
    }
    }
    return imax;

}




int Maximum(int Arr[],int isize)
{

    int imax=Arr[0];
    for(int i=0;i<isize;i++)
    {

    
    if(Arr[i]>imax)
    {
        imax=Arr[i];
    }
    }
    return imax;

}


int main()
{
    float *arr=NULL;
    int isize=0;
    float iret;


    cout<<"enter the size of array\n";

    cin>>isize;

    arr=new float[isize];
    printf("enter the value\n");
    for(int i=0;i<isize;i++)
    {
        cin>>arr[i];

    }

     iret=MaximumG<float>(arr,isize);
    cout<<"max element is :"<<iret;


    delete[]arr;

    return 0;

}

