interface A
{
     void showA();
}

interface B
{
    void showB();
}

 class C implements A, B
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

class  imp_class
{
    public static void main(String args[])
    {
        C t = new C();
        t.showA();
        t.showB();
    }
}