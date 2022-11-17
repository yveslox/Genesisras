import java.io.*;

class read_datak     
 {       
     public static void main(String args[])throws IOException
     {
      
      int a = 0, b = 0,t;
      InputStreamReader isr= new InputStreamReader(System.in);
      BufferedReader br = new BufferedReader(isr);

      
        System.out.print("Enter first number : ");
        a = Integer.parseInt(br.readLine());
        System.out.print("Enter second number : ");
        b = Integer.parseInt(br.readLine());
      
      System.out.print("#Before swapping : ");
      System.out.println(a + " "+ b);

      a = a ^ b;
      b = a ^ b;
      a = a ^ b;
      
      System.out.print("#After swapping : ");
      System.out.println(a + " "+ b);

    }
 }