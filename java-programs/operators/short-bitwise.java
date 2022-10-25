import java.io.*;
import java.util.Scanner;

class short_bitwise  
{      
    public static void main(String args[])
    { 
      
      int a = 13;

      System.out.println("a : "+a);
      
      a &= 4;
      System.out.println("a &= 4 : "+a);
      a |=3;
      System.out.println("a |= 3 : "+a);
      a ^=8;
      System.out.println("a ^= 8 : "+a);
      a<<=3;
      System.out.println("a <<=3 : "+a);
      a>>=2;
      System.out.println("a >>= 2 : "+a);
      a>>>=3;
      System.out.println("a >>>= 3 : "+a);
    }

}