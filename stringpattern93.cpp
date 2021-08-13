#include<iostream>
using namespace std;

/*  1234
4 3 2 1
4 3 2
4 3
4
*/

class numberx
{
    public:
    int ino;


    void accept()
    {
        cout<<"enter the number\n";
           cin>>ino;

    }

    void  pattern()
    {
        int idigit=0;
        int ivalue=ino;
        int icnt=0;


          while(ivalue>0)
          {
             icnt++;
             ivalue=ivalue/10;
        }
        ivalue=ino;
        for(int i=icnt;i>0;i--)
    
        {

            for(int j=0;j<i;j++)
            {
                cout<<ivalue%10<<"\t";
                ivalue=ivalue/10;

            }
            cout<<"\n";
            ivalue=ino;
        }
          


    }

};

int main()
{

    
    numberx obj;
    obj.accept();
    obj.pattern();
    
    return 0;
}

