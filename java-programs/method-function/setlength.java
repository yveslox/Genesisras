import java.io.*;
import java.util.Scanner;

class setlength
{
/**Main function**/
 public static void main(String args[])
{
  StringBuffer sb1 =new StringBuffer("Java programming examples.");
  System.out.println("String = "+sb1);

  sb1.setLength(12);
  System.out.println("String = "+sb1);

  sb1.setLength(4);
  System.out.println("String = "+sb1); 
}
}