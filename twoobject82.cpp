#include<iostream>
using namespace std;
class Arithmatic
{
    public:

    int ino1,ino2;

    void accept()
    {
        cout<<"enter the first number\n";
        cin>>ino1;
        cout<<"enter the second number\n";
        cin>>ino2;

    }

        int  addition()
        {
    int result=0;
    result=ino1+ino2;
    return result;

        }
int substractio()
{
    int result=0;
    result=ino1-ino2;
    return result;
}
};

 int  main()
{
    int iret=0;
    Arithmatic obj;
    Arithmatic obj2;

    obj.accept();
    iret=obj.addition();
    cout<<"addition is:"<<iret<<"\n";
    obj2.accept();

    iret=obj2.substractio();
    cout<<"sub is:"<<iret;
    return 0;


}