import java.io.*;
import java.util.Scanner;


class Box
{
  private double width;
  private double height;
  private double depth;
  
  Box()
  {
    width = 1;
    height = 1;
    depth = 1;
  }

  Box(double w, double h,double d)
  {
    width = w;
    height = h;
    depth = d;
  }

  Box(double len)
  {
    width = height = depth = len;
  }
  
  Box(Box b)
  {
    width = b.width;
    height = b.height;
    depth = b.depth;
  }

  double volume()
  {
    return (width * height * depth);
  }
}


class constructor_overloading
{
/**Main function**/
 public static void main(String args[])
{
    Box b1 = new Box();
    Box b2 = new Box(10,15,20);
    Box b3 = new Box(10);
    Box b4 = new Box(b2);

    System.out.println("Volume is "+b1.volume());
    System.out.println("Volume is "+b2.volume());
    System.out.println("Volume is "+b3.volume());
    System.out.println("Volume is "+b4.volume());    
}
}

