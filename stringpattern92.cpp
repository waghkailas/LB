#include<iostream>
using namespace std;

/*  1234
4 3 2 1
3 2 1
2 1 
1
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
        int icnt=0,itemp=0;


          while(ivalue>0)
          {
              itemp=ivalue;
              while(itemp>0)
              {
                  cout<<itemp%10<<"\t";
                  itemp=itemp/10;
              }
              cout<<"\n";
              ivalue=ivalue/10;

       
        
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

