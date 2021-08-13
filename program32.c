#include<stdio.h>

void pattern(unsigned int irow,unsigned int icol)
{

      int i,j;
    char ch='\0';
    
    for(i=irow;i>0;i--)
    {
        for(j=1;j<=icol;j++)
        {
           if(i>=j)
           {
               printf("*\t");

           }
           
           
        }
        printf("\n");
    }


}


int main()
{

       unsigned int ivalue=0,ivalue2=0;

       printf("enter the number of rows\n");
       scanf("%d",&ivalue);
       printf("enter the second number\n");
       scanf("%d",&ivalue2);

       pattern(ivalue,ivalue2);
    return 0;

}