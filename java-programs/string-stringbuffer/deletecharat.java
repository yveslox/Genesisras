class deletecharat
{
/**Main function**/
 public static void main(String args[])
{
    StringBuffer sb = new StringBuffer("Java Programming Examples.");
    
    System.out.println(" String = "+sb);
    
    sb = sb.deleteCharAt(5);

    System.out.println(" String = "+sb);    
}
}

