import java.io.*;
import java.util.*;

class read_data_console     
 {       
     public static void main(String args[]) throws IOException
     {
      
      int a = 0, b = 0, t;
      
      Console cn = System.console();
      
      a = Integer.parseInt(cn.readLine("Enter first number : "));
        
      b = Integer.parseInt(cn.readLine("Enter second number : "));
    
      System.out.print("#Before swapping : ");
      System.out.println(a + " "+ b);

      a = a + b;
      b = a - b;
      a = a - b;
      
      System.out.print("#After swapping : ");
      System.out.println(a + " "+ b);

    }
 }