#include<stdio.h>
#include<stdlib.h>
int add(int arr[],int ilength)
{
    int isum=0;

    for(int i=0;i<ilength;i++)
    {
        isum=isum+arr[i];
    }
    return isum;

}

int main()
{
    int *p=NULL;
    int isize=0;

    printf("enter the number of elements\n");
    scanf("%d",&isize);


    p=(int *)malloc(isize*sizeof(int));

    printf("enter the  elements\n");
    for(int i=0;i<isize;i++)
    {
        scanf("%d",&p[i]);

    }
   int ret= add(p,isize);
   printf("addition is:%d",ret);

       free(p);


   return 0;
}