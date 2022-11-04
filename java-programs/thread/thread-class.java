class A extends Thread 
{
    public A(String s)
    {
        super(s);
    }

    public void run()
    {
        for(int i=1;i<=15;i++)
        {
            System.out.println(getName());
        }
    }
}

 class thread_class
 {    
     
     public static void main(String args[])
     { 
        A a1 = new A("Java");
        A a2 = new A("Programming");
        A a3 = new A("Programming");
        
        a1.start();
        a2.start();
        a3.start();
        
        System.out.println("Hello !!!");
     }
 }