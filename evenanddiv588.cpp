#include<iostream>
using namespace std;
class Numbers
{
    public :
    int i;


    int *Arr=NULL;
    int isize;
    Numbers(int ino)
    {
        isize=ino;
        Arr=new int(isize);

    }

    void Accept()
    {
        cout<<"enter the numbers\n";

        for(i=0;i<isize;i++)
        {
            cin>>Arr[i];

        }

        
    }

    int count()
    {
        int icnt=0;
        for(i=0;i<isize;i++)
        {
            if((Arr[i]%2==0)&& (Arr[i]%5==0))
            {
                icnt++;
            }
        }
        return icnt;
    }

    
   



};

int main()
{
    int ino=0;
    cout<<"enter the number of element\n";
    cin>>ino;

    Numbers obj(ino);
    obj.Accept();
   int  iret=obj.count();
   cout<<"count is:\n"<<iret;
    




    return 0;
}