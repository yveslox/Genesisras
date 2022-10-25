import java.io.*;
import java.util.Scanner;

class delete
{
/**Main function**/
 public static void main(String args[])
{
  StringBuffer sb =new StringBuffer("Java programming examples.");
  System.out.println("String = "+sb);

  sb = sb.delete(5,17);
  
  System.out.println("String = "+sb);
}
}