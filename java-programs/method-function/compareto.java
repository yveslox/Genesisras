import java.io.*;
import java.util.Scanner;

class compareto
{
/**Main function**/
 public static void main(String args[])
{
    String s1 = "JAVA";
    String s2 = "JAVA";
    String s3 = "Java";
    System.out.println(s1+" equals "+s2+" = "+s1.compareTo(s2));
    System.out.println(s1+" equals "+s3+" = "+s1.compareTo(s3));
}
}