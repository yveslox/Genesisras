import java.io.*;
import java.util.Scanner;

class setcharat
{
/**Main function**/
 public static void main(String args[])
{
  StringBuffer sb1 =new StringBuffer("Java programming examples.");
  System.out.println("String Before replacing = "+sb1);

  sb1 .setCharAt(5,'P');
  
  System.out.println("String After replacing = "+sb1);
}
}