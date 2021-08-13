#include<stdio.h>

int main()
{

    char Arr[40];
    printf("Enter the name\n");
    //scanf("%s",Arr);
  //  gets(Arr);
  //fgets(Arr,40,stdin);//fgets(kashat,kiti,kuthun)
  scanf(" %[^'\n']s",Arr);


    printf("your name is\n");
    printf("%s",Arr);
    return 0;
}