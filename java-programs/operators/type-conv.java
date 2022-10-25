import java.io.*;
import java.util.Scanner;

class type_conv  
{      
    public static void main(String args[])
    { 
      int i = 2;
      float f = 12.33f;
      byte b = 1;
      double d = 124.097;
      
      double res = (i - b)*(d/f);

      System.out.println("Answer is = "+res);
    }
}
      