interface Ainterface
{
     void showA();
     void showB();
}

abstract class B implements Ainterface
{
    public void showA()
    {
        System.out.println("ShowA() of A interface.");
    }
}


 class Test extends B
{
    public void showB()
    {
        System.out.println("ShowB() of A interface.");
    }
}

class  partial_imp
{
    public static void main(String args[])
    {
        Ainterface a1 = new Test();
        a1.showA();
        a1.showB();
    }
}