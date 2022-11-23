
import java.util.Arrays;
import java.util.Iterator;
import java.util.Set;
import java.util.TreeSet;

class setcollection 
 {
     public static void main(String args[])
     {
        Set <String> set = new  TreeSet <String>();

        set.add("P");
        set.add("A");
        set.add("T");
        set.add("E");
        set.add("L");
    
        Iterator it = set.iterator();
        
        while(it.hasNext())
        {
            Object item = it.next();
            System.out.print(item+" ");    
        }
        System.out.println();
     }
 }