#include<stdio.h>

void strcopy1(char arr[],char brr[])
{
    if(arr==NULL || brr==NULL)
    {
        return;


    }

    while(*arr!='\0')
    {
        *brr=*arr;
        brr++;
        arr++;
}
    *brr='\0'; 


}

int main()

{
    char Arr[40];
    char Brr[40];


    printf("enter the string\n");
    scanf("%[^'\n']s",Arr);

    strcopy1(Arr,Brr);
    printf("After copy data is :%s\n",Brr);




    return 0;
}


