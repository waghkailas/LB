#include<stdio.h>
#include<stdbool.h>
bool perfectR(int no)
{
    int a=no;
    static int i=1;
  static  int sum=0;
    if(i<=no/2)
    {
        if(no%i==0)
        {
            sum=sum+i;


        }
       i++;
           perfectR(no);


    } 

    if(a==sum){
        return true;

    }
    else
    {
        return false;
    }



}


bool perfect(int no)
{ int a=no;
    static int i=1;
  static  int sum=0;
    while(i<=no/2)        //eax register stores the return val in assembly
                          //mov eax 
    {
        if(no%i==0)
        {
            sum=sum+i;


        }
       i++;
        


    } 

    if(a==sum){
        return true;

    }
    else
    {
        return false;
    }


}

int main()
{
    int ival=0;
    printf("enter the number\n");
    scanf("%d",&ival);

   bool iret=perfectR(ival);
   if(iret==true)
   {
       printf("perfect \n");

   }
   else
   
   {
       printf("not perfect");

   }
    
    return 0;


}