#include<stdio.h>

void Display(int no)
{
    for(int i=no;i>0;i--)
    {
        printf("%d \t",i);
    }
    printf("\n");
}
void DisplayR(int no)
{

    
    if(no>0)
    {
        printf("%d\t",no);
        
        DisplayR(no-1);

    }
}

int main()
{
    int no=0;

    printf("enter the number\n");
    scanf("%d",&no);
    Display(no);
    printf("after recursion\n");

    DisplayR(no);

     return 0;
}