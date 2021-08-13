// accept number and check whether number is perfect or not

#include<stdio.h>

int Factors(int no1)
{
    int ret=0;
    for(int i=1;i<no1;i++)
    {

        if(no1%i==0)
        {
            ret=ret+i; 
        }
    }
    return ret;


}
int main()
{

    int ivalue=0;

    int ret=0;

    printf("enter the number");
    scanf("%d",&ivalue);

      ret=Factors(ivalue);
      if(ret==ivalue)
      {
          printf("number is perfect\n");

      }
      else{
          printf("number is not perfect\n");
      }
     // printf("%d",ret);
      
    return 0;
}
