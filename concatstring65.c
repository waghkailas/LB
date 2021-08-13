#include<stdio.h>

void concatanation(const char arr[],char brr[])    //const is used to not change in original data
{
    if(arr==NULL || brr==NULL)
    {
        return;


    }

    while(*brr!='\0')
    {
       

        brr++;
        
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


    printf("enter the first string\n");
    scanf("%[^'\n']s",Arr);
     printf("enter the  second string\n");
    scanf(" %[^'\n']s",Brr);

    concatanation(Arr,Brr);
    printf("original string :%s\n",Arr);
    printf("After copy data is :%s\n",Brr);




    return 0;
}


