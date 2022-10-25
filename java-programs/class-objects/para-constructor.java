import java.io.*;
import java.util.Scanner;


class circle
{
    private double radius;

    circle(double rad)
    {
       radius = rad;
    }

    public double area()
    {
        return 3.14 * radius * radius;
    }
}

class para_constructor
{
/**Main function**/
 public static void main(String args[])
{
  circle c1 = new circle(10);
  System.out.println("Area of circle "+c1.area());
}
}

