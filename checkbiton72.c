#include<stdio.h>
#include<stdbool.h>

int checkbits(unsigned int ino)
{
   unsigned int imask=0x00000054;

   unsigned int ret=0;
   ret=ino & imask;
   if(ret==imask)
   {
       return true;

   }
   else{
       return false;

   }

     


}

int main()
{
    unsigned int ivalue=0;

    int iret=0;
    printf("enter the number\n");
    scanf("%u",&ivalue);
    iret=checkbits(ivalue);
    if(iret==false)
    {
        printf("bit is off\n");

    }
    else
    {
        printf("bit is open\n");
    }
   


    return 0;

}