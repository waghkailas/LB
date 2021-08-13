// accept no from user and display factors of that number

#include<stdio.h>

void Factors(int no1)
{
    for(int i=1;i<no1;i++)
    {

        if(no1%i==0)
        {
            printf("%d\t",i);
        }
    }


}
int main()
{

    int ivalue=0;

    int ret=0;

    printf("enter the number");
    scanf("%d",&ivalue);

      Factors(ivalue);
      
    return 0;
}
