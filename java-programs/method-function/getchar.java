import java.io.*;
import java.util.Scanner;

class getchar
{
/**Main function**/
 public static void main(String args[])
{
  char ch[] = new char[4];
  String s1 = "Java programming examples.";

  s1.getChars(0,4,ch,0);

  String s2 = new String(ch);

  System.out.println("Source: "+s1);
  System.out.print("Target : ");
  System.out.println(ch);

  System.out.println("Source : "+s1);
  System.out.println("Target : "+s2);
}
}