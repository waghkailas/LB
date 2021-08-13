import java.util.*;

/*
class countword
{
    public int count(String str)
    {
        char arr[]=str.toCharArray();
          int icnt=0;

        for(int i=0;i<arr.length;i++)
        {
            icnt++;
        }
        return icnt;
    }

}
*/

class trimstr
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter the string");
         String str=sobj.nextLine();

         System.out.println("entered string is:"+str);

         System.out.println("length is:"+str.length());

         String temp=str.trim();
         System.out.println("new string is:"+temp);
         System.out.println("new length is:"+temp.length());



         

        }

}