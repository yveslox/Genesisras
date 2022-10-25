class setchar
{
/**Main function**/
 public static void main(String args[])
{   
    StringBuffer sb1 = new StringBuffer("Java Nrogramming Examples.");

    System.out.println("String Before replacing = "+sb1);
    
    sb1.setCharAt(5,'P');

    System.out.println("String After replacing = "+sb1);

}
}

