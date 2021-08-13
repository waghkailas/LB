#include<stdio.h>

int sumdigitR(int ino)
{

   static int isum=0;
if(ino!=0)
{


    isum=isum+(ino%10);
    sumdigitR(ino/10);
}

    return  isum;
}
int sumdigit(int ino)
{

    int isum=0;

    while(ino!=0)
    {

        isum=isum+(ino%10);
        ino=ino/10;

    }
    return isum;

}

int main()
{
    int ivalue=0;
    printf("enter the number \n");
    scanf("%d",&ivalue);
    int iret=sumdigitR(ivalue);
    printf("additoon of numbers are :%d\n",iret);
     return 0;

}