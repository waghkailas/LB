//accept  N number from user and display 

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int isize)
{

     printf("elements of the array is\n");
     
    for(int i=0;i<isize;i++)
    {
        printf("%d\n",Arr[i]);
    }

}


int main()
{
     int *arr=NULL;
     int ilength=0;

     printf("enter the number of elements \n");
     scanf("%d",&ilength);


     arr=(int *)malloc(ilength*sizeof(int));

     printf("enter the elements \n");
     for(int i=0;i<ilength;i++)
     {
         scanf("%d",&arr[i]);

     }

     Display(arr,ilength);
     free(arr);

      
       return 0;

}