#include<stdio.h>
void DisplayR(int row,int col)
{
    
}

void Display(int row,int col)
{
    int i=1,j=1;

    while(i<=row)
    {
        j=1;
        while(j<=col)
        {
            printf("*\t");
            j++;
        }
      i++;  
        printf("\n");
        

    }

}
int main()
{

    int ival=0;
    int ival2=0;

    printf("enter the number of roews\n");
    scanf("%d",&ival);
    printf("renter the number of col\n");
    scanf("%d",&ival2);

    Display(ival,ival2);
    return 0;

}