//complexity is 2n
#include<stdio.h>
void reversedisplay(char str[])
{
       char *start,*end;

       start=str;
       end=str;

    if(str==NULL)
    {
        return;

    }

    int icnt=0;
    char temp='\0';


    while(*end!='\0')
    {
        
        end++;
       

    }
      end--;

      while(start<end)
      {
          temp=*start;
          *start=*end;
          *end=temp;

          start++;
          end--;
      }
}

int main()
{
    char Arr[40];

    printf("enter the string \n");
    scanf("%[^'\n']s",Arr);

    reversedisplay(Arr);
    printf("updated string is %s",Arr);

    return 0;

}
