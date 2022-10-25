import java.io.*;
import java.util.Scanner;

class equalsignorecase
{
/**Main function**/
 public static void main(String args[])
{
    String s1 = "JAVA";
    String s2 = "JAVA";
    String s3 = "Java";

    System.out.println(s1+" equals "+s2+" = "+s1.equals(s2));
    System.out.println(s1+" equals "+s3+" = "+s1.equals(s3));
    System.out.println(s1+" equalsignorecase "+s3+" = "+s1.equalsIgnoreCase(s3));
}
}