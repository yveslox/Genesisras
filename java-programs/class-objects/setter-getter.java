import java.io.*;
import java.util.Scanner;


class setter_getter
{
/**Main function**/
 public static void main(String args[])
{
  A ob = new A();
  ob.setmsg("Nils Techsys");
  System.out.println("Welcome to "+ob.getmsg()+" ..!");
}
}


class A
{
    private String message;

    public void setmsg(String msg)
    {
       message = msg;
    }

    public String getmsg()
    {
        return message;
    }
}


