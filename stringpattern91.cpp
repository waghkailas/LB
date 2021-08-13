#include<iostream>
using namespace std;
/*
h
h e
h e l
h e l l
h e l l o
*/

class stringx
{
    public:
    char str[40];

    void accept()
    {
        cout<<"enter the string\n";
        scanf("%[^'\n']s",str);

    }

    void  pattern()
    {
        char *ptr=str;
        char *s=str;
        int icnt1=0,icnt2=0;


        while(*ptr!='\0') 
        
        {
            while(icnt2<=icnt1)
            {
                cout<<"\t"<<*s<<"\t";
                s++;
                icnt2++;

            }
            icnt2=0;
            s=str;
            ptr++;
            icnt1++;
            cout<<"\n";

        }   
        

    }


};
int main()
{

    int ret=0;
    stringx obj;
    obj.accept();
    obj.pattern();
    
    return 0;
}

