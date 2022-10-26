interface Ainterface
{
    int SIZE = 100;
    void showA();
}

class Test implements Ainterface
{
    public void showA()
    {
        System.out.println("ShowA() of A interface.");
        System.out.println("SIZE = "+SIZE);
    }
}

class  field    
{
    public static void main(String args[])
    {

        Ainterface a1 = new Test();
        a1.showA();
    }
}