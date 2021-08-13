 #include<stdio.h>
#include<stdlib.h>

int MaxElement(int Arr[],int ilength)
{
      
      int imax=0,imax2=0;
      imax=Arr[0];
      if(Arr==NULL)
      {
          return; 
      }

for(int i=0;i<ilength;i++)
{

     if(Arr[i]>imax)
     {
        imax2=imax;
         imax=Arr[i];
         if(imax2<imax)
         {
             break;
         }
         
         
     }
    

    

}
return imax2;

}

int main()
{
    int ilength=0,i=0;
    int *arr=NULL;
    int iret=0;

      printf("enter the number of elemrnts \n");
      scanf("%d",&ilength);

      arr=(int *)malloc(ilength*sizeof(int ));
      if(arr==NULL)
      {
          return -1;
      }

      printf("enter the elements\n");
      for(i=0;i<ilength;i++)
      {
          scanf("%d",&arr[i]);
      }

      


     iret=MaxElement(arr,ilength);
     printf("max element is %d",iret);
     
     free(arr);
     return 0; 

}
