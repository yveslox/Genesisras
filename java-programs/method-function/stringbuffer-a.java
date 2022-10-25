import java.io.*;
import java.util.Scanner;

class stringbuffer_a
{
/**Main function**/
 public static void main(String args[])
{
  StringBuffer sb =new StringBuffer(40);
  
  sb = sb.append('J');
  System.out.println(" String 1 = "+sb);

  sb.append(new char[]{'A','V','A',' '});
  System.out.println(" String 2 = "+sb);

  sb.append(true);
  System.out.println(" String 3 = "+sb);

  sb.append(10);
  System.out.println(" String 4 = "+sb);

  sb.append(201);
  System.out.println(" String 5 = "+sb);

  sb.append(30.5f);
  System.out.println(" String 6 = "+sb);

  sb.append(40.5d);
  System.out.println(" String 7 = "+sb);
}
}