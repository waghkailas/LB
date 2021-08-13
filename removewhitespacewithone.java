import java.util.*;
public class removewhitespacewithone
 {
    
    
        public static void main(String arg[])
        {
            Scanner sobj=new Scanner(System.in);
    
            System.out.println("enter the string");
             String str=sobj.nextLine();
    
             System.out.println("entered string is:"+str);
    
             System.out.println("length is:"+str.length());
    
             String temp=str.trim().replaceAll("[ ]{2,}"," ");   /// this type is called canonical use of functions
    
              System.out.println("new length:"+temp.length());   ///regecstar .com
              System.out.println("modified string is :"+ temp);

    
             
             }
        
    }
    
    

