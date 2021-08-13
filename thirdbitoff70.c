#include<stdio.h>
int offbits(unsigned int ino)
{
   unsigned int imask=0xFFFFFFFB;

   unsigned int ret=0;
   
   
   

      ret=ino & imask;

      
     
   
   return ret;


}

int main()
{
    unsigned int ivalue=0;

    int iret=0;
    printf("enter the number\n");
    scanf("%u",&ivalue);
    iret=offbits(ivalue);
    printf("bits after off :%d \n",iret);


    return 0;

}