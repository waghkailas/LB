import java.util.*;

// array of any type use length property: eg Arr.length;
// for string use length() method : eg=str.length()
  
class Demo1
{

    public void evenword(String str)
    {
        String temp=str.trim().replaceAll("[ ]{2,}"," ");
        String arr[]=temp.split(" ");
        for(int i=0;i<arr.length;i++)   
                                        
        {
            if(arr[i].length()%2==0)
            {
                System.out.println("the word  is:"+arr[i]);
            }
        }
        /*

           for each loop

        for(String s:Arr)
        {
            if(s.length()%2==0)
            {
                System.out.println(s);

            }
        }

        */



    }
}


public class evenlengthword
 {
    
    
        public static void main(String arg[])
        {
            Scanner sobj=new Scanner(System.in);
    
            System.out.println("enter the string");
             String str=sobj.nextLine();
    
             System.out.println("entered string is:"+str);
    
             System.out.println("length is:"+str.length());
    
             Demo1 obj=new Demo1();
             obj.evenword(str);



    
             
             }
        
    }
    
    


