#include<stdio.h>
int countonR(int ival)
{
   static int imask=1;
   static int i=0,icnt=0;

    if(i<32)
    {
        if((ival &imask)==imask)
        {
            icnt++;

        }
        i++;
        imask=imask<<1;
        countonR(ival);

    }
    return icnt;
    
}
int counton(int ival)
{
    int imask=1;
    int i=0,icnt=0;

    while(i<32)
    {
        if((ival &imask)==imask)
        {
            icnt++;

        }
        i++;
        imask=imask<<1;

    }
    return icnt;

}

int main()
{
    unsigned int ival=0;
    printf("entet the number\n");
    scanf("%d",&ival);

    int iret=countonR(ival);
    printf("%d\n",iret);

    return 0;

}