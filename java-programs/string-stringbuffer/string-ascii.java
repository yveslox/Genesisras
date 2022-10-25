
class string_ascii
{
/**Main function**/
 public static void main(String args[])
{
    char ch[] = {'J','A','V','A'};
    String s1 = new String(ch);

    byte b[] = {65,66,67,68,69,70};
    String s2 = new String(b);

    System.out.println("String  = "+s1);
    System.out.println("String = "+s2);
}
}

