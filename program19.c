// print the frequency of the digit in number



#include<stdio.h>

int DigitsFreq(int no1,int no2)
{
        int icnt=0;
      int digit=0;
      if(no1<0)
      {
          no1=-no1; 
      }
      if(no2>9)
      {
          return 0;
      }
    
    while(no1!=0)
    {
        
        digit=no1%10;
            
          if(digit==no2)
          {
              icnt++;
          }



        
        no1=no1/10;

    }
    return icnt;
}
int main()
{

    int ret=0;
    int ivalue=0;
    int ivalue2=0;
    printf("Enter the number\n");
    scanf("%d",&ivalue);
    printf("Enter the number whoes freq is to be cal\n");
    scanf("%d",&ivalue2);
    ret = DigitsFreq(ivalue,ivalue2);

      printf("%d",ret);
    
    return 0;

}
