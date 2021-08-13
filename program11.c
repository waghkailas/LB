// accept number from user and calculate factorial of it using for loop

#include<stdio.h>

int Fact(int no1)
{

    int ret=1;
    if(no1<0)
    {
        no1=-no1;


    }
   // for(int i=1;i<=no1;i++)
  // for(int i=no1;i>0;i--)
    int i=no1;

    while(i>0)
    {
  
        ret=ret*i;
        i--;
    }

    return ret;
}
int main()
{

    int ivalue=0;

    int ret=0;

    printf("enter the number");
    scanf("%d",&ivalue);

      ret=Fact(ivalue);
      printf("%d",ret);
    return 0;
}
