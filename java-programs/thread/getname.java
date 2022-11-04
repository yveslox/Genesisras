
 class getname
 {    
     
     public static void main(String args[])
     { 
        System.out.println("Thread name = "+Thread.currentThread().getName());
        System.out.println("Priority = "+Thread.currentThread().getPriority());
     }
 }