#include<stdio.h>

void pattern(unsigned int irow,unsigned int icol)
{

    int i,j;
    char ch='\0';
    
    for(i=1;i<=irow;i++)
    {
        for(j=1,ch='A';j<=icol;j++,ch++)
        {
           if(i>=j)
           {
               printf("%c\t",ch);

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