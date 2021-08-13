// accept umber from user and return the addition of that factors of number


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
      printf("%d",ret);
      
    return 0;
}
