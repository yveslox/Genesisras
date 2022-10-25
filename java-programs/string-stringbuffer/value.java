class value
{
/**Main function**/
 public static void main(String args[])
{
    char ch[] = {'J','A','V','A'};

    String s1 = String.valueOf(ch);
    System.out.println("String 1:"+s1);

    String s2 = String.valueOf("Java programming Examples.");
    System.out.println("String 2:"+s2);

    String s3 = String.valueOf(true);
    System.out.println("String 3:"+s3);

    String s4 = String.valueOf(new char[]{'J','A','V','A'},2,2);
    System.out.println("String 4:"+s4);

    String s5 = String.valueOf(100);
    System.out.println("String 5:"+s5);

    String s6 = String.valueOf(55.55d);
    System.out.println("String 6:"+s6);

    String s7 = String.valueOf(55.55f);
    System.out.println("String 7:"+s7);

    String s8 = String.valueOf(1001);
    System.out.println("String 8:"+s8);

    String s9 = String.valueOf(Math.PI);
    System.out.println("String 9:"+s9);
}
}

