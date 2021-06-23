#include<stdio.h>
void strtoggle(char str[])
{

    if(str==NULL)
    {
        return;

    }
    

    while(*str!='\0')
    {
         if(*str>='a'&&*str<='z')
         {

            *str=*str-('a'-'A');//insted of 32 we can write it as
         }
         else if(*str>='A'&&*str<='Z')
         {
             *str=*str+('a'-'A');
         }


       str++;

    }
    


}

int main()
{
    char Arr[40];

    printf("enter the string \n");
    scanf("%[^'\n']s",Arr);

    strtoggle(Arr);
    printf("updated string is %s",Arr);

    return 0;

}
