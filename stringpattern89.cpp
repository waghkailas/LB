#include<iostream>
using namespace std;

class stringx
{
    public:
    char str[40];

    void accept()
    {
        cout<<"enter the string\n";
        scanf("%[^'\n']s",str);

    }

    int strlenx()
    {
        int icnt=0;
        char *ptr=str;
        while(*ptr!='\0')
        {
            ptr++;
            icnt++;

        }
        return icnt;

    }


};
int main()
{

    int ret=0;
    stringx obj;
    obj.accept();
    ret=obj.strlenx();
    cout<<"string length is:"<<ret<<"\n";
    return 0;
}

