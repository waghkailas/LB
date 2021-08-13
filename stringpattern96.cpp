#include<iostream>
using namespace std;

class stringx
{
    public:

    char Arr[40];

    void accept()
    {

        cout<<"enter the string\n";
        scanf("%[^'\n']s",Arr);

    }
    void pattern()
    {
        char *ptr=Arr;
        char *s=Arr;
        int icnt=0;

        while(*ptr!='\0');
        {
            while(*(s+icnt)!='\0')
            {
                cout<<*s<<"\t";
                s++;

            }
            s=Arr;
            ptr++;
            icnt++;
            cout<<"\n";
        }
    }
};
int main()
{
     stringx obj;
     obj.accept();
     obj.pattern();

        return 0;

}