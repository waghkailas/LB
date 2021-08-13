import java.util.*;
class Demo2
{

    public void evenword(String str)
    {
        int imax=0;
        String str1=null;

        String temp=str.trim().replaceAll("[ ]{2,}"," ");
        String arr[]=temp.split(" ");
        imax=arr[0].length();

        for(int i=0;i<arr.length;i++)
        {
            if(arr[i].length()>imax)
            { 
                   imax=arr[i].length();

                  str1=arr[i];
                
            }

        }
        System.out.println("max length word is"+str1);
 }
}

/*
index=0;

 for(int i=0;i<arr.length;i++)
        {
            if(arr[i].length()>imax)
            { 
                   imax=arr[i].length();

                  index=i
                
            }

        }
        System.out.println("max length word is"+Arr[index]);


*/
public class maxlenword
 {
     public static void main(String arg[])
        {
            Scanner sobj=new Scanner(System.in);
    
            System.out.println("enter the string");
             String str=sobj.nextLine();
    
             System.out.println("entered string is:"+str);
    
             System.out.println("length is:"+str.length());
    
             Demo2 obj=new Demo2();
             obj.evenword(str);



    
             
             }
        
    }
    
    


