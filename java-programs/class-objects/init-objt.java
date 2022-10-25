import java.io.*;
import java.util.Scanner;


class Box
{
  double width;
  double height;
  double depth;

  Box()
  {
    width = 10;
    height = 10;
    depth = 10;
  }
  double volume()
  {
    return (width * height * depth);
  }
}


class init_objt
{
/**Main function**/
 public static void main(String args[])
{
    Box b1 = new Box();
    Box b2 = new Box();
    
    System.out.println("Volume is "+b1.volume());

    System.out.println("Volume is "+b2.volume());    
}
}

