interface A
{
     void showA();
}

interface B
{
    void showB();
}

interface C extends A, B
{
    void showC();
}

 class D implements C
{
    public void showA()
    {
        System.out.println("ShowA() of A interface.");
    }

    public void showB()
    {
        System.out.println("ShowB() of B interface.");
    }

    public void showC()
    {
        System.out.println("ShowC() of C interface.");
    }
}

class  inhe_interface2
{
    public static void main(String args[])
    {
        C c1= new D();
        c1.showA();
        c1.showB();
        c1.showC();
    }
}