#include<stdio.h>

void EvenNo(int ino)
{

       
       int ret=2;
   for(int i=0;i<7;i++)
   {

         printf("%d\n",ret);
        ret= ret+2;

   }

}

int main()
{ 
     
     int ivalue=0;

     printf("Enter the number \n");
     scanf("%d",&ivalue);

     EvenNo(ivalue);

     return 0;


}