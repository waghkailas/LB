#include<stdio.h>
#include<stdlib.h>

int EvenCountDisplay(int Arr[],int isize)
{

    int i=0,icount=0;
    if((Arr==NULL)||(isize<=0))
    {
        return;
    }

    printf("the even numbers are\n");

    for(i=0;i<isize;i++)
    {
        if(Arr[i]%2==0)
        {
            icount++;
        }
    }
    return icount;
}

int main()
{

    int ilength=0,isum=0;
    int *arr=NULL;
    int i=0;
     
     printf("enter the number of elements \n");
     scanf("%d",&ilength);

     arr=(int *)malloc(ilength*sizeof(int));
     if(arr==NULL)
     {
         printf("unable to create memory\n");
         return -1;
     }

     printf("enter the elements\n");
     for(i=0;i<ilength;i++)
     {
         scanf("%d",&arr[i]);

     }


     isum=EvenCountDisplay(arr,ilength);
     printf("%d",isum);
     free(arr);


     return 0;


}