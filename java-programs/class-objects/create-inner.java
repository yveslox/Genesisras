import java.io.*;
import java.util.Scanner;


class outer
{
  private int a;
  
  outer()
  {
    a = 10;
  }

  public class inner
  {
    private int b;
    inner()
    {
        b = 20;
    }
    void showinner()
    {   
        System.out.println("b = "+b);
    }
  }

  void showouter()
  {
    inner inr = new inner();
    System.out.println("a = "+a);
    inr.showinner();
  }
}


class create_inner
{
/**Main function**/
 public static void main(String args[])
{
    outer otr = new outer();
    
    otr.showouter();
}
}

