#include<stdio.h>
int countA(char str[])
{
        int icnt=0;
        if(str==NULL)
        {
            return 0;
        }
    while(*str!='\0')
    {
       if(*str=='a')
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

    iret=countA(Arr);
    printf("%d",iret);

    return 0;
}