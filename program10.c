#include<stdio.h>

int mul(int no1,int no2)
{

    int ret=1;
    if(no1<0)
    {
        no1=-no1;


    }
    if(no2<0)
    {
        no2=-no2;
    }


    for(int i=0;i<no2;i++)
    {

        ret=ret*no1;
    }

    return ret;
}





int main()
{

    int ivalue=0,ivalue2=0;

    int ret=0;

    printf("enter the numbers");
    scanf("%d %d",&ivalue,&ivalue2);

      ret=mul(ivalue,ivalue2);
      printf("%d",ret);
    return 0;
}
