import java.util.*;
class Demo3
{

    public void reversestr(String str)
    {
        String temp=str.trim().replaceAll("[ ]{2,}"," ");

        String arr[]=temp.split(" ");

        for(int i=0;i<arr.length;i++)
        {
            StringBuffer bobj=new StringBuffer(arr[i]);
            System.out.println(bobj.reverse());
            bobj=null;

        }
    

       
                
    

        
 }
}

public class reversestr
 {
     public static void main(String arg[])
        {
            Scanner sobj=new Scanner(System.in);
    
            System.out.println("enter the string");
             String str=sobj.nextLine();
    
             System.out.println("entered string is:"+str);
    
             System.out.println("length is:"+str.length());
    
             Demo3 obj=new Demo3();
             obj.reversestr(str);



    
             
             }
        
    }
    
    


