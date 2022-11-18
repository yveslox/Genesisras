class gen
{
    private double val;

    <T extends Number> Gen(T arg)
    {
        val = arg.doubleValue();
    }
   
    void showValue()
    {
        System.out.println("val : "+val);
    }
}

 class gene_constructor
{
    public static void main(String args[])
    {
        Gen t1 = new Gen(100);
        Gen t2 = new Gen(123.5F);

        t1.showValue();
        t2.showValue();
    }
}