#include<iostream>
using namespace std;

class Numbers
{
    public:
    int *Arr=NULL;
     int isize;

     Numbers(int ino)
     {
         isize=ino;
         Arr=new int(isize);

     }

     void Accept()
     {
         int i=0;
         cout<<"enter the numbers\n";

         for(i=0;i<isize;i++)
         {
             cin>>Arr[i];

         }
     }

     void Display()
     {
         cout<<"entered number are\n";
         for(int i=0;i<isize;i++)
         {
             cout<<Arr[i];

         }
         
     }

     int difference()
     {
         int ieven=0,iodd=0;


         for(int i=0;i<isize;i++)
         {
             if(Arr[i]%2==0)
             {
                 ieven=ieven+Arr[i];

             }
             else
             {
                 iodd=iodd+Arr[i];


             }


         }
         return ieven-iodd;
     }

};

int main()
{
    int ino=0;
    cout<<"enter the number of elements\n";
    cin>>ino;

    Numbers obj(ino);
    obj.Accept();
    obj.Display();

   int iret=obj.difference();
    cout<<"diff is:"<<iret;



    return 0;

}