//complexity is 2n

#include<stdio.h>
void reversedisplay(char str[])
{

    if(str==NULL)
    {
        return;

    }
    int icnt=0;

    while(*str!='\0')
    {
        icnt++;
       str++;

    }
    //printf("%d",icnt);
    str--;
    

    //while(icnt>0)
    for(;icnt>0;icnt--,str--)
    {
         printf("%c",*str);
      //  icnt--;
       // str--;
       //  printf("%s",*str);//erro due to %s
    }
   // printf("%s",*str);//error
    


}

int main()
{
    char Arr[40];

    printf("enter the string \n");
    scanf("%[^'\n']s",Arr);

    reversedisplay(Arr);
    printf("updated string is %s",Arr);

    return 0;

}
