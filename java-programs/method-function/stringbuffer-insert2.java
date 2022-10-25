import java.io.*;
import java.util.Scanner;

class stringbuffer_insert2
{
/**Main function**/
 public static void main(String args[])
{
    
  StringBuffer sb =new StringBuffer(40);
  
  sb = sb.insert(0,'A');
  System.out.println("String 1 = "+sb);

  sb.insert(0,"JAV");
  System.out.println("String 2 = "+sb);

  sb.insert(4,new char [] {' ','C','o','m','p'});
  System.out.println("String 3 = "+sb);

  sb.insert(0,true);
  System.out.println("String 4 = "+sb);

  sb.insert(0,10);
  System.out.println("String 5 = "+sb);

  sb.insert(0,201);
  System.out.println("String 6 = "+sb);

  sb.insert(0,30.5f);
  System.out.println("String 7 = "+sb);

  sb.insert(0,40.5d);
  System.out.println("String 8 = "+sb);
}
}