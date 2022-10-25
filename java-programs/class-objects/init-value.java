import java.io.*;
import java.util.Scanner;


class Box
{
  double width;
  double height;
  double depth;
  void initbox(double w,double h,double d)
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


class init_value
{
/**Main function**/
 public static void main(String args[])
{
    Box b1 = new Box();
    Box b2 = new Box();
    double vol;
    
    b1.initbox(10,15,20);
     
    b2.initbox(5,6,7);
    
    System.out.println("Volume is "+b1.volume());

    System.out.println("Volume is "+b2.volume());    
}
}

