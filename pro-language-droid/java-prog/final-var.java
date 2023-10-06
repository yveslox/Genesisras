
import java.util.*;


class final_var 
{
    public static void main(String args[])
    {
       TestClass obj = new TestClass();
        System.out.println(obj.num);
    }
    
}

class TestClass
{
    final int num = 5;
}

