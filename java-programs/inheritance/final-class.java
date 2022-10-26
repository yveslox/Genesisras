final class A 
{
    void display()
    {
        System.out.println("A's display ");
    }
        
}

class B 
{
    void display()
    {
        System.out.println("B's display ");
    }
    
}

class  final_class   
{
    public static void main(String args[])
    {
        A a = new A();
        B b = new B();
        a.display();
        b.display();
    }
}