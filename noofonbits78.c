#include<stdio.h>
#include<stdbool.h>                                     
                                              
int checkbits(unsigned int ino)
{
    int icnt=0;
       unsigned int imask=0x00000001;
        unsigned int ret=0;



      for(int i=0;i<32;i++)
      {
          ret=ino & imask;
          if( ret==imask) 
          {
              icnt++;/* code */
          }
          
          imask=imask<<1;


      }
   
   return icnt;

   }

int main()
{
    unsigned int ivalue=0;
    unsigned int ipose=0;


    unsigned int iret=0;
    printf("enter the number\n");
    scanf("%u",&ivalue);
   // printf("enter the position \n");
    //scanf("%u",&ipose);

    iret=checkbits(ivalue);
   printf("new number is %u",iret);
   


    return 0;

}