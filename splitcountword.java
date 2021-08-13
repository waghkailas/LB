import java.util.*;
public class splitcountword 
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("enter the string");
         String str=sobj.nextLine();

         System.out.println("entered string is:"+str);

         System.out.println("length is:"+str.length());

         String temp=str.trim();

         String arr[]=temp.split("\\s");
          System.out.println("number of words  are:"+arr.length);

         
         }
    
}
