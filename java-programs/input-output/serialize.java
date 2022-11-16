import java.io.*;
import java.util.*;

class Box implements Serializable
{
 private double width;
 private double height;
 private double depth;

 Box()
 {
    width = 0;
    height = 0;
    depth = 0;
 }

 Box (double w, double h,double d)
 {
    width = w;
    height = h;
    depth = d;
 }

 void display()
 {
    System.out.println("width = "+width);
    System.out.println("height = "+height);
    System.out.println("depth = "+depth);
 }
}

class serialize     
 {       
     public static void main(String args[])throws IOException
     {
      
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      double w = 0.0 , h = 0.0 , d = 0;

      System.out.println(" Enter width, height & depth :");

      w = Double.parseDouble(br.readLine());
      h = Double.parseDouble(br.readLine());
      d = Double.parseDouble(br.readLine());
      
      Box b1 = new Box(w,h,d);
      
      FileOutputStream fos = new FileOutputStream("ObjFile");

      ObjectOutputStream oss = new ObjectOutputStream(fos);

      oss.writeObject(b1);

      oss.close();
      
    }
 }