import java.io.*;
import java.util.Scanner;

class split
{
/**Main function**/
 public static void main(String args[])
{
  String s1 = new String("Java programming examples.");
  String s2[] = s1.split(" ");


  System.out.println("String : "+s2[0]);
  System.out.println("String : "+s2[1]);
  System.out.println("String : "+s2[2]);
}
}