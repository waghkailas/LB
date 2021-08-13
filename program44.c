#include<stdio.h>
#include<stdlib.h>

int LastOccurs(int Arr[],int ilength,int inumber)
{
      
      int i=0;
      if(Arr==NULL)
      {
          return; 
      }

for( i=ilength-1;i>=0;i--)
{

     if(Arr[i]==inumber)
     {
         
         break;

     }

}
return i;


}

int main()
{
    int ilength=0,i=0,inumber=0;
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

      printf("enter the nubmber you want to search\n");
      scanf("%d",&inumber);


     iret=LastOccurs(arr,ilength,inumber);
     if(iret==-1)
     {
         printf("number not found\n");


     }
     else{
            printf("number Last occurs at position %d",iret);
         
     }

    
     free(arr);
     return 0; 

}
