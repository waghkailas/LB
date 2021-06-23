#include<stdio.h>

void strcopy1(const char arr[],char brr[])    //const is used to not change in original data
{
    if(arr==NULL || brr==NULL)
    {
        return;


    }

    while(*arr!='\0')
    {
        if(*arr>='a' && *arr<='z')
        {
            *brr=*arr-32;
                
        }
        else{

              *brr=*arr;
        }

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
    printf("original string :%s\n",Arr);
    printf("After copy data is :%s\n",Brr);




    return 0;
}


