import java.io.*;
import java.util.Scanner;

class region
{
/**Main function**/
 public static void main(String args[])
{
  boolean b,b1;
  String s1 = new String("Java programming examples.");
  String s2 = new String("Programming");

  b = s1.regionMatches(true,5,s2,0,8);
  
  b1 = s1.regionMatches(true,5,s2,0,8);

  System.out.println("Result of region match : "+b);
  System.out.println("Result of region match for ignore case : "+b1);
}
}