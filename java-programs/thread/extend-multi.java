class A extends Thread 
{
    public void run()
    {
        for(int i=1;i<=10;i++)
        {
            System.out.println("Java");
        }
    }
}

class B extends Thread 
{
    public void run()
    {
        for(int i=1;i<=10;i++)
        {
            System.out.println("Programming");
        }
    }
}

class C extends Thread 
{
    public void run()
    {
        for(int i=1;i<=10;i++)
        {
            System.out.println("Examples");
        }
    }
}


 class extend_multi
 {    
     
     public static void main(String args[])
     { 
        System.out.println("Start Main ");
        A a = new A();
        B b = new B();
        C c = new C();
        
        a.start();
        b.start();
        c.start();
        
        System.out.println("Bye bye Main !!!");
     }
 }