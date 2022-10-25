class insert
{
/**Main function**/
 public static void main(String args[])
{
    String s = new String("Java");
    StringBuffer sb = new StringBuffer(" Examples.");
    
    sb = sb.insert(0,s);
    System.out.println(" String = "+sb);
    
    sb.insert(5, "Programming ");
    System.out.println(" String = "+sb);    
}
}

