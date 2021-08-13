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

    int wordcount()
    {
        int icnt=0;
        char *ptr=str;
        char **itr=NULL;
        while(*ptr!='\0')
        {
            
            *itr=ptr;

            if(**itr!=' ')
            {
                while(((**itr>='a') &&(**itr<='z'))||((**itr>='A')&&(**itr<='z')))
                {
                    **(itr)++;
                }
                icnt++;

            }
            else if(*ptr!='\0')
            {
                *ptr++;
            }
            
            

        }
        return icnt;

    }


};
int main()
{

    int ret=0;
    stringx obj;
    obj.accept();
    ret=obj.wordcount();
    cout<<"word count is:"<<ret<<"\n";
    return 0;
}

