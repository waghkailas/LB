// accept the number from user and check it divisible by 3 and 5 or not

#include<stdio.h>
#include<stdbool.h>

bool checkdiv(int no)
{

if(((no%3)==0)&&((no%5)==0))
{
    return true;
}

else{
    return false;
}

}
int main()
{

    int ivalue=0;
    
    bool bret=false;

    printf("enter the number\n");
    scanf("%d",&ivalue);
    //printf("enter the second number\n");

    bret=checkdiv(ivalue);

    if(bret==true)
    printf("%d is divisible by  3and 5",ivalue);
    else
    printf("%d is not divisible by 3 and 5",ivalue);
    return 0;
}