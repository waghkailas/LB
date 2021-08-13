#include<stdio.h>
#include<stdbool.h>                                     
                                               // dynamic mask creation

int checkbits(unsigned int ino,unsigned int ipose,unsigned int ipose2)
{
    if(ipose<1 || ipose>32)
    {
        return false;
    }
    if(ipose2<1 || ipose>32)
    {
        return false;
    }

   unsigned int imask=0x00000001;
   unsigned int imask1=0x00000001;
   unsigned int imask2=0x00000000;

   imask=imask<<(ipose-1);
   imask1=imask1<<(ipose2-1);
   imask2=((imask) | (imask1));


   unsigned int ret=0;
   ret=(ino )& (imask2);
   if(ret==imask2)
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
    unsigned int ipose2=0;


    int iret=0;
    printf("enter the number\n");
    scanf("%u",&ivalue);
    printf("enter the positions \n");
    scanf("%u %u",&ipose,&ipose2);

    iret=checkbits(ivalue,ipose,ipose2);
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