import java.util.Hashtable;

class hashtable 
{
    public static void main(String args[])
    {
      Hashtable h = new Hashtable();
      h.put("India","Delhi");
      h.put("Australia","Canbara");
      h.put("France","Paris");
      h.put("Uk","London");

      System.out.println(h.get("Australia"));
       
    }
}