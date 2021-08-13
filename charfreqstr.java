import java.util.*;
class Demo5
{

    public void  charfreq(String str)
    {
        char Arr[]=str.toCharArray();
        int frequency=0;
        HashMap<Character,Integer>hobj=new HashMap<Character,Integer>();
        for(char ch: Arr)
        {
            if(hobj.containsKey(ch))
            {
                frequency=hobj.get(ch);

                hobj.put(ch,frequency+1);

            }
            else
            {
                hobj.put(ch,1);
            }
        }

        System.out.println(hobj);
        
    }


        
}

public class charfreqstr
 {
     public static void main(String arg[])
        {
            Scanner sobj=new Scanner(System.in);
    
            System.out.println("enter the string");
             String str=sobj.nextLine();
    
             System.out.println("entered string is:"+str);
    
             
             Demo5 obj=new Demo5();
            obj.charfreq(str);
            

             }
        
    }
    
    


