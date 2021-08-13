// print digits in the given number


#include<stdio.h>

void Digits(int no1)
{

      int digit=0;
      if(no1<0)
      {
          no1=-no1; 
      }
    
    while(no1!=0)
    {
        
        digit=no1%10;
        printf("%d\n",digit);
        no1=no1/10;

    }
}
int main()
{

    int ivalue=0;
    printf("Enter the number\n");
    scanf("%d",&ivalue);
    Digits(ivalue);


    
    return 0;

}
