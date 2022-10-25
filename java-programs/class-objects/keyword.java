import java.io.*;
import java.util.Scanner;


class circle
{
    private double radius;

    circle()
    {
       radius = 10.0;
    }
    
    circle(double radius)
    {
       this.radius = radius;
    }

    public double area()
    {
        return 3.14 * radius * radius;
    }
}

class keyword
{
/**Main function**/
 public static void main(String args[])
{
  circle c1 = new circle();
  System.out.println("Area of circle "+c1.area());
}
}

