// design pattern by gangs of four

import java.util.*;

 class MarvallousArray1
{
    public int Arr[];
    public MarvallousArray1(int isize)
    {
        Arr=new int[isize];

    }
    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("pleaase enter the element");
        for(int i=0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();

        }

        /*
        247
        */
    }

    public void Display()
    {
        System.out.println("element s are");
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]+"\t");
        }
        System.out.println();
        

    }

    public boolean SearchLinear(int no)
    {
        int i=0;
        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]==no)
            break;
        }
        if(i==Arr.length)
        return false;
        else
        return true;
    } 

    public boolean Bidirectional(int no)
    {
        int istart=0;
        int iend=Arr.length-1;
        while(istart<=iend)
        {
            if((Arr[istart]==no)||(Arr[iend]==no))
            {
                break;
            }
            istart++;
            iend--;


        }
        if(istart>iend)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    public boolean CheckSorted()
    {
        int i=0;
        for( i=0;i<Arr.length-1;i++)
        {
            if(Arr[i]>Arr[i+1])
            {
                break;

            }

        }
        if(i==Arr.length-1)
        return true;
        else 
        return false;
    }

    boolean binarysearch(int no)
    {
        int istar=0;
        int iend=Arr.length-1;
       int mid=(istar+iend)/2;

       if(CheckSorted()==false)
       {
             return(Bidirectional(no));                 //return false;
       }

       if(no>Arr[istar]||no>Arr[iend])
       return false;

       while(istar<=iend)
       {
           if(Arr[mid]==no)
           {
               break;

           }
          else
           {
               if(no<=Arr[mid])
               {
                   iend=mid-1;

               }
               else
               {
                   istar=mid+1;

               }
               mid=(istar+iend)/2;

           }
            


       }
       if(Arr[mid]==no)
       {
            return true;
       }
       else
       {
           return false;
       }

    }

}

public class search 
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the number of element");
        int no= sobj.nextInt();

        MarvallousArray1 mobj=new MarvallousArray1(no);
        mobj.Accept();
        mobj.Display();

        System.out.println("enter the element to search");
     int no1=sobj.nextInt();
     boolean iret=mobj.binarysearch(no1);
if(iret==true)
    {
        System.out.println("elemtn is  found");

    }

    else
    {
        System.out.println("element is not found");
    }
        

/*boolean bret=mobj.CheckSorted();
if(bret==true)
{
    System.out.println("array is sorted");
}
else
{
    System.out.println("array is not sorted");

}
*/

    }
    
}
