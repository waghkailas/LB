// accept number from user and display all the number till that number
//Input :8
//output:1 2 3 4 5 6 7 8
//Input:-6
//output: 1 2 3 4 5 6

/*
Start
accept oe number as no
if no is negative then convert it into positive
Create one counter as cnt and set it to 1
Iterate till the counter is lass than or equal to  umber 
print the value of counter on screen 
Increment the value of counter by 1
countinue
end
*/ 
#include<stdio.h>

void Display(int ino) //5
{
   // 1 2 3 4 5
   //start  1
   // end   5
   // difference  1
   if(ino<0)  //input updator
   {
       ino=-ino;

   }

     int icnt=1;
   while(icnt<=ino)
   {
       printf("%d\n",icnt);
       icnt++;
   }

}
int main()// entry point function
{
    int ivalue=0;
    printf("enter the number\n");
    scanf("%d",&ivalue);
    Display(ivalue);

    
    
    return 0;
}


