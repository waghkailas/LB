#include<stdio.h>
void Display()
{
       int i=0; // local variable
     //   1   2   3
    for( i=0;i<4;i++)
    {
        printf("*\t");  //4

    }
}
void DisplayR()
{
   static int i=1; // 1 local variable  static variabe used to preserve the value
    if(i<=4)//2
    {
        printf("*\t"); //4
        i++;  //3
        DisplayR();  // recursive call

    }

}

int main()
{
   //   Display();
    DisplayR();
      return 0;

}
