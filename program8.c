// student pass or not
#include<stdio.h>
void Display(int marks)
{
    if((marks<0)||(marks>100))
    {
        printf("invalid input\n");
        return;
    }

    if(marks<35)
    {
        printf("student is napas\n");
    }
    else if((35<=marks) && (marks<=50))
    {
        printf("student is in pass class\n");

    }
    else if((50<marks)&&(marks<=60))
    {
        printf("studen isin second class\n");
    }
    else if((60<marks)&&(marks<=70))
    {
        printf("student is in first clASS\n");
    }
    else{
        printf("studen`t is first class with distinction\n");
    }


}

int main()
{

int marks=0;

printf("enter the marks of student\n");
scanf("%d",&marks);
Display(marks);
return 0;



}