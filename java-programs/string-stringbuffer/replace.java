class replace
{
/**Main function**/
 public static void main(String args[])
{
    StringBuffer sb = new StringBuffer("Java programming Examples.");

    System.out.println(" String = "+sb);
    
    sb = sb.replace(5,16, "Language");
    System.out.println(" String = "+sb);    
}
}

