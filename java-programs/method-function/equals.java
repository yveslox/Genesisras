import java.io.*;
import java.util.Scanner;

class equals
{
/**Main function**/
 public static void main(String args[])
{
    String s1 = "JAVA";
    String s2 = "JAVA";
    String s3 = "Java";
    String s4 = new String("JAVA");
    String s5 = new String("JAVA");

    System.out.println(s1+" equals "+s2+" = "+s1.equals(s2));
    System.out.println(s1+"   ==   "+s2+" = "+(s1==s2));
    System.out.println(s1+" equals "+s3+" = "+s1.equals(s3));
    System.out.println(s1+"   ==   "+s3+" = "+(s1==s3));
    System.out.println(s1+" equals "+s4+" = "+s1.equals(s4));
    System.out.println(s1+"   ==   "+s4+" = "+(s1==s4));
    System.out.println(s4+" equals "+s5+" = "+s4.equals(s5));
    System.out.println(s4+"   ==   "+s5+" = "+(s4==s5));
}
}