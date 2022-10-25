import java.io.*;
import java.util.Scanner;

class deletecharat
{
/**Main function**/
 public static void main(String args[])
{
  StringBuffer sb =new StringBuffer("Java programming examples.");
  System.out.println("String = "+sb);

  sb = sb.deleteCharAt(5);
  
  System.out.println("String = "+sb);
}
}