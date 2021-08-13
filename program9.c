// accept number from user and display the table of that number
#include<stdio.h>

void Display(int inum)
{
      int ret=0;
       



    for(int i=1;i<=10;i++)
    {
        ret=inum*i;
        printf("%d\n",ret);
    }
    
}
int main()
{

    int inum=0;
     printf("enter the number\n");
     scanf("%d",&inum);

     Display(inum);
     return 0;


}

