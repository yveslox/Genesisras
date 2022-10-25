
class outer
{
  int outer_x = 100;
  
  void test()
  {
    for(int i=0;i<5;i++)
    {
        class inner
        {
            void display()
            {
                System.out.println("outer_x = "+outer_x);
            }
        }
        inner inr = new inner();
        inr.display();
    }
  }
}


class inner_class2
{
/**Main function**/
 public static void main(String args[])
{
    outer otr = new outer();    
    otr.test();
}
}

