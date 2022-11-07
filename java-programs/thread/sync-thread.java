class A extends Thread 
{
    public void run()
    {
        for(int i=1;i<=10;i++)
        {
            System.out.println("Thread A = "+i);
        }
        System.out.println("End of Thread A.");
    }
}

class B extends Thread 
{
    public void run()
    {
        for(int i=1;i<=10;i++)
        {
            System.out.println("Thread B = "+i);
        }
        System.out.println("End of Thread B.");
    }
}

 class sync_thread
 {    
     
     public static void main(String args[])
     { 
    
        A a = new A();
        B b = new B();
         
        a.setPriority(Thread.MAX_PRIORITY - 2);
        b.setPriority(Thread.MIN_PRIORITY + 2);

        a.start();
        b.start();
        
        System.out.println("End of Main Thread !!!");
     }
 }