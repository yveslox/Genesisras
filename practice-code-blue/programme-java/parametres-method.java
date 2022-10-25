class parametresmethod
{
 public static void main(String args[])
 {
  testobject obj= new testobject();
  obj.printMessage("Hello world !!");
 }
}

class testobject
{
 String message;
 void printMessage(String text)
 {
  message = text;
  System.out.println(message);
 }
}
