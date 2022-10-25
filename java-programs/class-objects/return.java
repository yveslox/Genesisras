import java.io.*;
import java.util.Scanner;



class return_test
{
/**Main function**/
 public static void main(String args[])
{
    System.out.println("AAA");
    funtest();
    System.out.println("DDD");
}

public static void funtest()
{
    int a = 10;
    System.out.println("BBB");
    if(a == 10)
        return ;
    System.out.println("CCC");
}
}

