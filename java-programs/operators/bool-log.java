import java.io.*;
import java.util.Scanner;

class bool_log  
{      
    public static void main(String args[])
    { 
      
      boolean a = true;
      boolean b = false;
      
      
      boolean c = a | b;
      boolean d = a & b;
      boolean e = a ^ b;
      boolean f = !a;
      boolean g = (!a & b) | (a & !b);

      System.out.println("a = "+a);
      System.out.println("b = "+b);
      System.out.println("a & b = "+c);
      System.out.println("a | b = "+d);
      System.out.println("a ^ b = "+e);
      System.out.println("!a = "+f);
      System.out.println("!a&b| a&!b ="+g);
    
    }

}