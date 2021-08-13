#include<stdio.h>
int countspace(char str[])
{
        int icnt=0;
        if(str==NULL)
        {
            return 0;
        }
    while(*str!='\0')
    {
       if(*str==' ')
       {

       
       icnt=icnt+1;
       }
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

    iret=countspace(Arr);
    printf("%d",iret);

    return 0;
}