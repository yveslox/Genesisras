import java.io.*;
import java.util.*;

class read_datak2     
 {       
     public static void main(String args[]) throws IOException
     {
      
      int a = 0, b = 0, t;
      
      DataInputStream dis= new DataInputStream(System.in);
      
      
        System.out.print("Enter first number : ");
        a = Integer.parseInt(dis.readLine());
        System.out.print("Enter second number : ");
        b = Integer.parseInt(dis.readLine());
      
      System.out.print("#Before swapping : ");
      System.out.println(a + " "+ b);

      a = a + b;
      b = a - b;
      a = a - b;
      
      System.out.print("#After swapping : ");
      System.out.println(a + " "+ b);

    }
 }