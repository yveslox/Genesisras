import java.io.*;
import java.util.Scanner;

class stringbuffer_rep
{
/**Main function**/
 public static void main(String args[])
{
    
  StringBuffer sb =new StringBuffer("Java Programming Examples.");
  
  System.out.println("String = "+sb);

  sb.replace(5,16,"Language");
  System.out.println("String = "+sb);
}
}