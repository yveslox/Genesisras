import java.io.*;
import java.util.Scanner;


class Box
{
  double width;
  double height;
  double depth;
  void volume()
  {
    System.out.print("Volume is ");
    System.out.println(width * height * depth);
  }
}


class multi_objt
{
/**Main function**/
 public static void main(String args[])
{
    Box b1 = new Box();
    Box b2 = new Box();
    double vol;
    
    b1.width = 10;
    b1.height = 15;
    b1.depth = 20;
    
    b2.width = 5;
    b2.height = 6;
    b2.depth = 7;

    b1.volume();
    b2.volume();    
}

}

