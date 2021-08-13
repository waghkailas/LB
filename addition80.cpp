#include<iostream>
using namespace std;

int addition(int no1,int no2)
{
    int result=0;
    result=no1+no2;
    return result;

}
int main()
{
    int ivalue=0,ivalue2=0,iret=0;

    cout<<"enter the number\n";
    cin>>ivalue>>ivalue2;

    iret=addition(ivalue,ivalue2);

    cout<<"addition is: "<<iret;
    return 0;


}