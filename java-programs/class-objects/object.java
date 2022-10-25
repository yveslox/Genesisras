import java.io.*;
import java.util.Scanner;

class Distance
{
    int feet;
    double inches;
}


class object
{
/**Main function**/
 public static void main(String args[])
{
    
  Distance d1 = new Distance();
  Distance d2 = new Distance();

  d1.feet = 14;
  d1.inches = 9.5;

  d2.feet = 19;
  d2.inches = 5.5;

  System.out.println("Dist-1 :"+d1.feet+"\'-"+d1.inches+"\"");
  System.out.println("Dist-1 :"+d2.feet+"\'-"+d2.inches+"\"");
}
}

