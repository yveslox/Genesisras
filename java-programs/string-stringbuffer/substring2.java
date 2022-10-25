class substring2
{
/**Main function**/
 public static void main(String args[])
{
    StringBuffer sb1 = new StringBuffer("Java Programming Examples.");

    System.out.println(" String = "+sb1);
    
    String s1 = sb1.substring(5);

    System.out.println(" String = "+s1);
    
    String s2 = sb1.substring(5,14);

    System.out.println(" String = "+s2);
    
}
}

