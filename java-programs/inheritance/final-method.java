class A 
{
    final void display()
    {
        System.out.println("A's display ");
    }
        
}

class B extends A
{
    void show()
    {
        System.out.println("B's display ");
    }
    
}

class  final_method   
{
    public static void main(String args[])
    {
        B b = new B();
        b.display();
        b.show();
    }
}