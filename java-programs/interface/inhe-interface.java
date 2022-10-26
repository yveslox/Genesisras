interface Ainterface
{
     void showA();
}

interface Binterface extends Ainterface
{
    void showB();
}

 class Test implements Binterface
{
    public void showA()
    {
        System.out.println("ShowA() of A interface.");
    }

    public void showB()
    {
        System.out.println("ShowB() of B interface.");
    }
}

class  inhe_interface
{
    public static void main(String args[])
    {
        Ainterface a1 = new Test();
        a1.showA();
        
        Binterface b1 = new Test();
        b1.showA();
        b1.showB();
    }
}