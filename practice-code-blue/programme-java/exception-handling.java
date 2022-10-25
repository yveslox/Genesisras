import java.util.*;

class exceptionhandling
{
public static void main(String args[])
{
 try
 {
  int a = 1;
  int b = 0;
  int c = a / b;
  
  System.out.println(c);
  
 }catch(Exception e)
 {
  System.out.println("Excetion caugth :"+ e.getMessage());
 }
}
}
