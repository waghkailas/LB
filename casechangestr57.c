#include<stdio.h>
void casechange(char str[])
{

    if(str==NULL)
    {
        return;

    }

    while(*str!='\0')
    {
         if(*str>='a'&&*str<='z')
         {

            *str=*str-32;
         }

       str++;

    }
    


}

int main()
{
    char Arr[40];

    printf("enter the string \n");
    scanf("%[^'\n']s",Arr);

    casechange(Arr);
    printf("updated string is %s",Arr);

    return 0;

}
