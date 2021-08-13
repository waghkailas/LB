#include<stdio.h>

void DisplayBinary(unsigned int ino)
{
    unsigned int iDigit=0;
    while(ino>0)
    {
        iDigit=ino%2;
        printf("%u\t",iDigit);
        ino=ino/2;

    }
}
int  main()
{
    unsigned int ivalue=0;
    printf("enter number\n");
    scanf("%u",&ivalue);

    DisplayBinary(ivalue);
    return 0;

}