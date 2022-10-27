//package Pack1;
//import Pack1.*;

 class first
{
    public void view()
    {
        System.out.println("This first class.");
    }
}

class  importing_pck
{
    public static void main(String args[])
    {
        first f = new first();
        f.view();
    }
}