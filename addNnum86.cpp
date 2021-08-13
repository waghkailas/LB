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
        Arr=new int [isize];

    }
    void accept()
    {
        cout<<"enter the values\n";

        for(int i=0;i<isize;i++)
        {
            cin>>Arr[i];

        }
    }

    void Display()
    {
        
        cout<<"values are:\n";
        for(int i=0;i<isize;i++)
        {
            cout<<Arr[i]<<"\n";

        }
    }
    int Addition()
    {
        int i=0,isum=0;
        for(i=0;i<isize;i++)
        {
            isum=isum+Arr[i];

        }
        return isum;

    }

      ~Numbers()
      {
          delete[]Arr;
      }
};

int main()
{
    int ino=0;
    int iret=0;
    cout<<"entre the number of elements \n";
    cin>>ino;

    Numbers obj(ino);
    obj.accept();
    obj.Display();
    iret=obj.Addition();
    cout<<"addition is:"<<iret<<"\n";
    return 0;
}
