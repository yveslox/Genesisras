
 class main_thread
{    
    
    public static void main(String args[])
    { 
       Thread t = Thread.currentThread();
       System.out.println("Current thread is = "+t);

       t.setName("My thread");
       System.out.println("After changing name is = "+t);
    }
}