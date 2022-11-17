import java.io.*;

class bufferedreader     
 {       
     public static void main(String args[])
     {
      
      int a = 0, b = 0,t;
      InputStreamReader isr= new InputStreamReader(System.in);
      BufferedReader br = new BufferedReader(isr);

      try 
      {
        System.out.print("Enter first number : ");
        a = Integer.parseInt(br.readLine());
        System.out.print("Enter second number :");
        b = Integer.parseInt(br.readLine());
      } 
      catch (Exception e) 
      {
        // TODO: handle exception
        System.out.println(" Exception occured");
      }
      
      System.out.print("#Before swapping : ");
      System.out.println(a + " "+ b);

      a = a + b;
      b = a - b;
      a = a - b;
      
      System.out.print("#After swapping : ");
      System.out.println(a + " "+ b);

    }
 }