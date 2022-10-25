class A 
{
    A()
    {
        System.out.println("A's constructor");
    }
        
}

class B extends A
{
    B()
    {
        System.out.println("B's constructor");
    }
    
}

class C extends B
{
    C()
    {
        super();
        System.out.println("C's constructor");
    }
    
}

class  super_constructor 
{
    public static void main(String args[])
    {
        C c = new C();
    }
}