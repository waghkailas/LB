import java.util.Scanner;
import inputoutput.MarvallousArray;

  class Bubble extends MarvallousArray
{
    public Bubble(int isize)
    { 
    super(isize);
    }



     public  void sort()
      {
          int i=0;
          int j=0;
          int temp=0;

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
              System.out.println("data after pass :"+i);
              for(int k=0;k<Arr.length;k++)
              {
                  System.out.println(Arr[k]+"\t");

              }
              System.out.println();

          }

      }
}

public class bubblesort
 {

    public static void main(String arg[])
    {

        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the number of element");
        int no= sobj.nextInt();

        MarvallousArray mobj=new MarvallousArray(no);
       
        Bubble bobj=new Bubble(no);
        bobj.Accept();
        bobj.Display();
        bobj.sort();
        bobj.Display();



    }
    
}
