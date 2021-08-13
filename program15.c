// accept number and check whether number is perfect or not

#include<stdio.h>

int Prime(int no1)
{
    if(no1<0)
    {
        no1=-no1;
    }
    
   int  flag=0;

    for(int i=2;i<no1/2;i++)
    {

        if(no1%i==0)
        {
            
            flag=1;

            break;

        }
    }
    return flag;


}
int main()
{

    int ivalue=0;

    int ret=0;

    printf("enter the number");
    scanf("%d",&ivalue);

      ret=Prime(ivalue);
      if(ret==1)
      {
          printf("number is not prime");

      }
      else{
          printf("number is prime\n");
      }
     // printf("%d",ret);
      
    return 0;
}
