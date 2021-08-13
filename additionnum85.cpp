  #include<iostream>
using namespace std;
class Arithmatic
{
    public:

    int ino1,ino2;

   Arithmatic(int x,int y)
   {
       ino1=x;
       ino2=y;
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
    Arithmatic obj(33,33);
    Arithmatic obj2(33,33);

   
    iret=obj.addition();
    cout<<"addition is:"<<iret<<"\n";
    

    iret=obj2.substractio();
    cout<<"sub is:"<<iret;
    return 0;


}