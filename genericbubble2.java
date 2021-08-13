import java.util.*;

class Bubble3<T>
{

    public void sort(T Arr[])
    {
       int i=0;
          int j=0;
          T temp;

          for(i=0;i<Arr.length;i++)
          {
              for(j=0;j<Arr.length-i-1;j++)
              {
                  if(Arr[j]>Arr[j+1])
                  {
                      temp=Arr[j];
                      Arr[j]=Arr[j+1];
                      Arr[j+1]=temp;

                  }
              }
            }
            
    }

}

public class genericbubble2
{
    public static void main(String arg[])
    {
       Scanner sobj=new Scanner(System.in);

       System.out.println("enter the number of elemnt");
       int no=sobj.nextInt();
       Integer Arr[]=new Integer[no];
        
            System.out.println("pleaase enter the element");


            for(int i=0;i<Arr.length;i++)
            {
                Arr[i]=sobj.nextInt();
    
            }
            System.out.println("element s are");
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]+"\t");
        }
        System.out.println();

        Bubble3<Integer> bobj=new Bubble3<Integer>();
        bobj.sort(Arr);

        System.out.println("elemnts after sorting");
        for(int i=0;i<no;i++)
        {
            System.out.println(Arr[i]+"\t");
        }
        System.out.println();
        
}
    
}
