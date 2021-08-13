// accept the number from user and check it divisible by 3 and 5 or not

#include<stdio.h>
#include<stdbool.h>

bool checkdiv(int no1,int no2)
{

if(no1%no2==0)
{
    return true;
}

else{
    return false;
}

}
int main()
{

    int ivalue1=0;
    int ivalue2=0;
    
    bool bret=false;

    printf("enter the number\n");
    scanf("%d",&ivalue1);
    printf("enter the second number\n");
    scanf("%d",&ivalue2);

    bret=checkdiv(ivalue1,ivalue2);

    if(bret==true)
    printf("%d is divisible by %d ",ivalue1,ivalue2);
    else
    printf("%d is not divisible by %d",ivalue1,ivalue2);
    return 0;
}