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
    
    circle(circle ob)
    {
       radius = ob.radius;
    }

    public double area()
    {
        return 3.14 * radius * radius;
    }
}

class arg_constructor
{
/**Main function**/
 public static void main(String args[])
{
  circle c1 = new circle(10);
  circle c2 = new circle(c1);
  System.out.println("Area of circle "+c1.area());
}
}

