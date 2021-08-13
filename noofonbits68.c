#include<stdio.h>
int Noofbits(unsigned int ino)
{
 //  unsigned int idigit=0;

   int icnt=0;
   while(ino>0)
   {
      
      // idigit=ino%2;
      /* if(idigit==1)
       {
           icnt++;
       }
       */
      //icnt=icnt+idigit;
      icnt=icnt+(ino%2);
       ino=ino/2;
   }
   return icnt;


}

int main()
{
    unsigned int ivalue=0;

    int iret=0;
    printf("enter the number\n");
    scanf("%u",&ivalue);
    iret=Noofbits(ivalue);
    printf("no of bits%d \n",iret);


    return 0;

}