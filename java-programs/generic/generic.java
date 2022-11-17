class A <T>
{
    T ob;

    A(T o)
    {
        ob = o;
    }

    T getob()
    {
        return ob;
    }

    void showType()
    {
        System.out.println("type of T is"+ob.getClass().getName());
    }
}

public class generic
{
    public static void main(String args[])
    {
        A<Integer> iob = new A<Integer>(100);
        iob.showType();

        int v = iob.getob();
        System.out.println("Value : "+v);

        System.out.println();
        A<String> strOb = new A<String>("Nils");
        strOb.showType();

        String str = strOb.getob();
        System.out.println("Value : "+str);
    }
}