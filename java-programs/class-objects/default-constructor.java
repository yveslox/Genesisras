import java.io.*;
import java.util.Scanner;


class circle
{
    private double radius;

    circle()
    {
       radius = 10.0;
    }

    public double area()
    {
        return 3.14 * radius * radius;
    }
}

class default_constructor
{
/**Main function**/
 public static void main(String args[])
{
  circle c1 = new circle();
  System.out.println("Area of circle "+c1.area());
}
}

