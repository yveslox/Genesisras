using System;

class Shape
{
 public int length;
 public int breadth;
}

//deived class
class Rectangle:Shape
{
 public int getArea ()
 {
  int area= length* breadth;
  return area;
 }
}

class program
{
 static void Main(string[] args)
 {
   Rectangle rectangle = new Rectangle();
   rectangle.length=12;
   rectangle.breadth=7;

   int area= rectangle.getArea();
   Console.WriteLine("Area : {0}",area);
 }
}

