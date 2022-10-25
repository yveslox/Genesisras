import java.io.*;
import java.util.Scanner;

class bitwise_op  
{      
    public static void main(String args[])
    { 
      
      int a = 3,b = 6,c;

      System.out.println("a = "+a);
      System.out.println("b = "+b);
      
      c = a & b;
      System.out.println("a & b = "+c);
      c = a | b;
      System.out.println("a | b = "+c);
      c = a ^ b;
      System.out.println("a ^ b = "+c);
      c = ~b;
      System.out.println("~b = "+c);
      c = a<<3;
      System.out.println("a << 3 = "+c);
      c = b>>2;
      System.out.println("b >> 2 = "+c);
      a = -1;
      c = a>>>24;
      System.out.println("a >>> 24 = "+c);
    }

}