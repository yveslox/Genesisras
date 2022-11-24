
import java.util.Collections;
import java.util.Enumeration;
import java.util.HashSet;

class hashset 
 {
     public static void main(String args[])
     {
        HashSet <String> hashset = new HashSet<String>();

        hashset.add("A");
        hashset.add("B");
        hashset.add("C");
        hashset.add("D");
        hashset.add("E");
        hashset.add("F");
        

        Enumeration e = Collections.enumeration(hashset);
        while(e.hasMoreElements())      
            System.out.print(e.nextElement()+" ");
       
        System.out.println();
        
     }
 }