#include<stdio.h>
#include<stdbool.h>


bool Reverse(int no)
{
    int irev=0;
    int iDigit=0;



    if(no<0)
    {
        no=-no;

    }
    int ino=no;
     while(no>0)
     {

            iDigit=no%10;

                irev=(irev*10)+iDigit;

                no=no/10;

}
     if(irev==ino)
     {

         return true;

     }
     else{
         return false;
     }
}

int main()
{

    int ivalue=0;
    printf("Enter the number\n");
    scanf("%d",&ivalue);

    bool iret;

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