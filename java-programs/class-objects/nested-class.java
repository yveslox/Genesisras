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
    System.out.println("a = "+a);
  }
}




class nested_class
{
/**Main function**/
 public static void main(String args[])
{
    outer otr = new outer();
    outer.inner inr = otr.new inner();

    otr.showouter();
    inr.showinner();
}
}

