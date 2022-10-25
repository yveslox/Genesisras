import java.io.*;
import java.util.Scanner;

class substring
{
/**Main function**/
 public static void main(String args[])
{
  String s1 ="Java Programming Examples.";
  
  String s2 = s1.substring(5);
  String s3 = s1.substring(5,12);

  System.out.println("Source : "+s1);
  System.out.println("Target : "+s2);
  System.out.println("Target : "+s3);
}
}