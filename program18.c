// aacept number from user return the addition of digits from that number


#include<stdio.h>

int  SumDigits(int no1)
{
        int ret=0;
      int digit=0;
      if(no1<0)
      {
          no1=-no1; 
      }
    
    while(no1!=0)
    {
        
        digit=no1%10;
          ret=ret+digit;
        
        no1=no1/10;

    }
    return ret;
}
int main()
{

    int ret=0;
    int ivalue=0;
    printf("Enter the number\n");
    scanf("%d",&ivalue);
    ret = SumDigits(ivalue);

      printf("%d",ret);
    
    return 0;

}
