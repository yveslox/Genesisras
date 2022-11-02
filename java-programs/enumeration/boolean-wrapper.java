
class boolean_wrapper
{    
    public static void main(String args[])
    { 
        Boolean b1 = Boolean.valueOf(false);
        Boolean b2 = Boolean.valueOf("true");

    
        System.out.println(b1.booleanValue());
        System.out.println(b2.booleanValue());      
    }
}