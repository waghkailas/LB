#include<stdio.h>

int Reverse(int no)
{
    int irev=0;
    int iDigit=0;


    if(no<0)
    {
        no=-no;

    }
     while(no>0)
     {

            iDigit=no%10;

                irev=(irev*10)+iDigit;

                no=no/10;

            

          
     }
     return irev;
}

int main()
{

    int ivalue=0;
    printf("Enter the number\n");
    scanf("%d",&ivalue);

    int iret=0;

    iret=Reverse(ivalue);
    printf("%d",iret);

    return 0;

}