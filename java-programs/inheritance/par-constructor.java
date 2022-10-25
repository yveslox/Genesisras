class A 
{
    int x;
    A(int a)
    {
        x = a;
        System.out.println("A's constructor, x : "+x);
    }
        
}

class B extends A
{
    int y;
    B(int a,int b)
    {
        super(a);
        y = b;
        System.out.println("B's constructor, y : "+y);
    }
    
}

class C extends B
{
    int z;
    C(int a,int b,int c)
    {
        super(a,b);
        z = c;
        System.out.println("C's constructor, z : "+z);
    }
    
}

class  par_constructor 
{
    public static void main(String args[])
    {
        C x = new C(10,20,30);
    }
}