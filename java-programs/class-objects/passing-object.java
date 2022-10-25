import java.io.*;
import java.util.Scanner;


class circle
{
    private double radius;

    circle()
    {
       radius = 0.0;
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

class passing_object
{
/**Main function**/
 public static void main(String args[])
{
  circle c1 = new circle(10);
  calcarea (c1);
}

public static void calcarea(circle c)
{
    System.out.println("Area of circle "+c.area());
}
}

