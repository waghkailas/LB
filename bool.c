#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL check(int arr[],int ilength) 
{
int i=0;
for(i=0;i<ilength;i++)
{
if(arr[i]==11)
{
  
return 1;
}
else
{
    
return 0;
}
}
}
int main()
{
int isize=0,icnt=0,ilength=0;
int*arr=NULL;
BOOL bret=FALSE ;
printf("enter no of ele\n");
scanf("%d",&isize);
arr=(int*)malloc(isize*sizeof(int));
printf("enter the elements\n");
for(icnt=0;icnt<isize;icnt++)
{
scanf("%d",&arr[icnt]);
}

bret=check(arr,isize);

if(bret==TRUE)
{
printf("11 is present");
}
else
{
printf("11 is absent");
}
free(arr);
return 0;
}
