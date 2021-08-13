#include<stdio.h>
#include<stdbool.h>                                     
                                               // dynamic mask creation

int checkbits(unsigned int ino,unsigned int ipose)
{
    if(ipose<1 || ipose>32)
    {
        return false;
    }
   unsigned int imask=0x00000001;
   imask=imask<<(ipose-1);

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
    unsigned int ipose=0;


    int iret=0;
    printf("enter the number\n");
    scanf("%u",&ivalue);
    printf("enter the position \n");
    scanf("%u",&ipose);

    iret=checkbits(ivalue,ipose);
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