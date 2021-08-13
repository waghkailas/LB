import java.util.*;
class Demo4
{

    public String reversestr(String str)
    {
        String temp=str.trim().replaceAll("[ ]{2,}"," ");
        StringBuffer gobj=new StringBuffer(temp);
         

        String arr[]=temp.split(" ");
        String output=" ";



        for(int i=0;i<arr.length;i++)
        {
            StringBuffer bobj=new StringBuffer(arr[i]);
            output=output + " "+bobj.reverse();
            bobj=null;

        }
        return output.trim();
       }
}

public class reverseallstr
 {
     public static void main(String arg[])
        {
            Scanner sobj=new Scanner(System.in);
    
            System.out.println("enter the string");
             String str=sobj.nextLine();
    
             System.out.println("entered string is:"+str);
    
             System.out.println("length is:"+str.length());
    
             Demo4 obj=new Demo4();
            String str1= obj.reversestr(str);
            System.out.println("reverse string is:"+str1);

             }
        
    }
    
    


