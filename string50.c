   #include<stdio.h>
   void Display(char str[])
   {
      int icnt=0;
       printf("character from string are\n");

       //while(str[icnt]!='\0')
       //for(icnt=0;str[icnt]!='\0';icnt++)
       while(*str!='\0')
       {
           printf("%c",*str);
          str++;

       }
   }
   int main()
   {

       char Arr[10];
       printf("enter the name\n");
       fgets(Arr,10,stdin);

       Display(Arr);
       return 0;



   }