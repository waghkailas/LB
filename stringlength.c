#include<stdio.h>

int lengthR(char str[])
{

   static int icnt=0;

    if(*str!='\0')
    {

        icnt++;
        lengthR(str++);

    }
    
    return icnt;
}
int length(char str[])
{
    int icnt=0;
    while(*str!='\0')
    {
        icnt++;
        str++;
    }
    return icnt;

}

int main()
{
     char arr[30];
    printf("enter the string\n");
    scanf("%[^'\n']s",arr);


    int iret=lengthR(arr);
    printf("strng length is %d",iret);
    free(arr);
    


    return 0;

}