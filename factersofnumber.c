#include<stdio.h>

void factersR(int ino)
{
   static int i=1;
    if(i<=ino/2)
    {
        if(ino%i==0)
        {
            printf("%d",i);

        }
       i++;
       factersR(ino);

    }
}
void facters(int ino)
{
int i=1;

    while(i<=ino/2)
    {
          if(ino%i==0)
          {

          
          printf("%d\n",i);
          }
          i++;

    }


}

int main()
{
    int ino=0;
    printf("enter the number\n");
    scanf("%d",&ino);
    factersR(ino);


    return 0;


}