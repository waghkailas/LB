#include<stdio.h>



int  Largeno(int no)
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
            if(iDigit)
             no=no/10;

}
     
}

int main()
{

    int ivalue=0;
    printf("Enter the number\n");
    scanf("%d",&ivalue);

    int  iret;

    iret=Reverse(ivalue);
    if(iret==true)
    {
        printf("number is pallindrome\n");

    }
    else{
        printf("number is not pallindrome\n");
        
    }

   
    return 0;

}