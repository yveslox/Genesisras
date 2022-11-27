class random
{
    public static void main(String args[])
    {
      for(int i = 1;i<=5;i++)
      {
        int t = (int)(Math.random()*10);
        System.out.println(" Num  "+i+" : "+t);
      }
      
    }
}