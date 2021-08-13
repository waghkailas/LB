import java.util.Scanner;
import inputoutput.MarvallousArray;

  class Bubble2 extends MarvallousArray
{
    public Bubble2(int isize)
    { 
    super(isize);
    }



     public  void sort()
      {
          int i=0;
          int j=0;
          int temp=0;
          boolean swap=false;

          swap=true;


          for(i=0;i<Arr.length;i++)
          {
              swap=false;
              for(j=0;j<Arr.length-i-1;j++)
              {
                  if(Arr[j]>Arr[j+1])
                  {
                      temp=Arr[j];
                      Arr[j]=Arr[j+1];
                      Arr[j+1]=temp;
                      swap=true;


                  }
              }
              if(swap==false)
              {
                  break;
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

public class bubblesort2
 {

    public static void main(String arg[])  // throws exception
    {

        Scanner sobj=new Scanner(System.in);
        // BufferedReader br=new Bufferedreader(new InputStreamReader(System.in));    itis checked exception
        System.out.println("Enter the number of element");
        int no= sobj.nextInt();

        MarvallousArray mobj=new MarvallousArray(no);
       
        Bubble2 bobj=new Bubble2(no);
        bobj.Accept();
        bobj.Display();
        System.out.println("enter the type of swap you want");
        System.out.println("Inc:for increasing order");
        System.out.println("Dec: for decreasing order");
        String type=sobj.nextLine();
        

      //  bobj.sort(type);
        bobj.Display();



    }
    
}
