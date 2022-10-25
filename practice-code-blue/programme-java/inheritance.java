class inheritance
{
 public static void main(String args[])
 {
  class2 obj = new class2();
  System.out.println(obj.age);
  System.out.println(obj.speed);
 }
}
//super class
class class1
{
 int age = 33;
 protected int speed = 44;
 private int limit = 55;
}

//subclass
class class2 extends class1
{
 int cats = 8;
}
