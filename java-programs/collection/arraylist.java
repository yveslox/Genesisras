import java.util.Iterator;
import java.util.Vector;
import java.util.Enumeration;
import java.util.ArrayList;
import java.util.List;

public class arraylist 
 {
     public static void main(String args[])
     {
        List <String> list = new ArrayList<String>();

        list.add("P");
        list.add("A");
        list.add("E");
        list.add("L");

        list.add(2,"T");
        System.out.println(list);
     }
 }