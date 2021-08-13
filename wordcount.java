import java.util.*;
class Demo
{

    public int wordcount(String str)
    {
        String temp=str.trim().replaceAll("[ ]{2,}"," ");  /// [ ] used for single single two white space  is replaced by one white space
        String arr[]=temp.split(" ");
        return arr.length;


    }
}


public class wordcount
 {
    
    
        public static void main(String arg[])
        {
            Scanner sobj=new Scanner(System.in);
    
            System.out.println("enter the string");
             String str=sobj.nextLine();
    
             System.out.println("entered string is:"+str);
    
             System.out.println("length is:"+str.length());
    
             Demo obj=new Demo();
             int ret=obj.wordcount(str);
             System.out.println("words is:"+ ret);



    
             
             }
        
    }
    
    


