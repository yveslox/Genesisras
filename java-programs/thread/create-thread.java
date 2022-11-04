class A implements Runnable 
{
    public void run()
    {
        for(int i=1;i<=15;i++)
        {
            System.out.println(Thread.currentThread().getName());
        }
    }
}

 class create_thread
 {    
     
     public static void main(String args[])
     { 
        
        A a = new A();
        
        Thread t1 = new Thread(a,"Java");
        Thread t2 = new Thread(a,"Programming");
        Thread t3 = new Thread(a,"Examples");

        t1.start();
        t2.start();
        t3.start();
        
        System.out.println("Hello !!!");
     }
 }