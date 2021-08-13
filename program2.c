// accept two numbers from user and return max and min number from user

/*
algorithm for max

start
accept first number from user
accept second number from user

if no1 is greter than no2
then no1 is maximum
otherwise
 no2 is maximum

stop

*/

//include the user define header file

#include"header2.h"
int main()
{
     int ino1=0;
     int ino2=0;
     int iret=0;

     printf("Enter first number\n");
     scanf("%d",&ino1);
     printf("Enter the second number\n");
     scanf("%d",&ino2);
    iret=Maximum(ino1,ino2);
     printf("Maximum number is :%d\n",iret);
     return 0;
     

}