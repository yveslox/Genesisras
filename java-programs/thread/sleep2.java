class threademo extends Thread 
{
    int i = 1;

    public void run()
    {
        while(i<=10)
        {
            System.out.println("i :: "+i);

            try 
            {
             Thread.sleep(1000);   
            }
           catch (Exception e) 
            {
                // TODO: handle exception
            }
            i++;
        }
    }
}

 class sleep2
 {    
     
     public static void main(String args[])
     { 
       threademo t = new threademo();
       t.start();
     }
 }