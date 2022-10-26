interface Ainterface
{
    void showA();
}

class Test implements Ainterface
{
    public void showA()
    {
        System.out.println("ShowA() of A interface.");
    }
}

class  interfacetest   
{
    public static void main(String args[])
    {
        Test t1 = new Test();
        t1.showA();

        Ainterface a1 = new Test();
        a1.showA();

        a1 = t1;
        a1.showA();
    }
}