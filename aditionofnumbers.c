#include<stdio.h>
#include<stdlib.h>
int sumR(int arr[],int no)
{
     static int i=0;
 static int isum=0;


    if(i<no)
    {
        isum=isum+(arr[i]);
        i++;
        sumR(arr,no);
    }
    return isum;

}


int sum(int arr[],int no)
{ static int i=0;
 static int isum=0;


    while(i<no)
    {
        isum=isum+(arr[i]);
        i++;
    }
    return isum;
}
int main()
{

    int *arr=NULL;
    int ival=0,i=0;

    printf("hoe many elemnets\n");
    scanf("%d",&ival);

    arr=(int*)malloc(ival*sizeof(int));
     printf("enter the elements\n");
     while( i<ival){
     scanf("%d",&arr[i]);
     i++;
     }

    int iret=sumR(arr,ival);
    printf("sum is %d\n",iret);


    return 0;

}