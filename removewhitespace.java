import java.util.*;

class removewhitespace
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
         //String temp2=temp.replaceAll("\\s",""); // removes one by one space in string
           
         //String temp2=temp.replaceAll("\\s+",""); // removes one or more spaces at a time
         String temp2=temp.replaceAll("\\s{2,}",""); // removes two white spaces at a time 


         System.out.println(" new string after :"+temp2);
    }
}