import java.io.*;
import java.util.Scanner;


class Box
{
  double width;
  double height;
  double depth;

  Box(double w, double h,double d)
  {
    width = w;
    height = h;
    depth = d;
  }
  double volume()
  {
    return (width * height * depth);
  }
}


class init_objt2
{
/**Main function**/
 public static void main(String args[])
{
    Box b1 = new Box(10,15,20);
    Box b2 = new Box(5,6,7);
    
    System.out.println("Volume is "+b1.volume());

    System.out.println("Volume is "+b2.volume());    
}
}

