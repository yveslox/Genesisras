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


class returning_object
{
/**Main function**/
 public static void main(String args[])
{
    circle c1 ;
    c1 = createcircle();
    calcarae(c1);
}
public static circle createcircle()
{
    circle c = new circle(10);
    return c;
}

public static void calcarae(circle c)
{
    System.out.println("Area of circle : "+c.area());
}

}

