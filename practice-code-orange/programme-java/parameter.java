class parameter
{
 public static void main(String args[])
 {
 testobject obj= new testobject();
 obj.printmessage("hello world!!");
 }
}

class testobject
{
String message;

void printmessage(String text)
{
message=text;
System.out.println(message);
}
}
