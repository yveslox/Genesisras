
import java.util.*;

class staticclassex{
    private String first;
    private String last;
    
    private static int members = 0;
    public staticclassex(String fn,String ln)
    {
        first = fn;
        last = ln;
        members++;
        System.out.println("Mem,bers in club : "+members);
    }
    public String getfist()
    {
        return first;
    }
    public String getlast()
    {
        return last;
    }
    public static int getmembers()
    {
        return members;
    }
}


class static_var 
{
    public static void main(String args[])
    {
        staticclassex obj1 = new staticclassex("Abc","Bcd");
        staticclassex obj2 = new staticclassex("Cde","Def");
        staticclassex obj3 = new staticclassex("Efg","Fgh");
        System.out.println(obj2.getfist());
        System.out.println(staticclassex.getmembers());
    }
    

}

