#include<stdio.h>
int strlength(char str[])
{
        int icnt=0;
    while(*str!='\0')
    {
        printf("%d:%c:%d\n",icnt,*str,*str);
       icnt=icnt+1;
       str++;
    }
    return icnt;

}

int main()
{

    char Arr[40];
    int iret=0;

    printf("enter the string\n");
    //fgets(Arr,40,stdin);
    scanf("%[^'\n']s",Arr);

    iret=strlength(Arr);
    printf("%d",iret);

    return 0;
}