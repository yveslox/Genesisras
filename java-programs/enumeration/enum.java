enum Colour
{
    Red(200), Green(150), Blue(100), Black(250), White(175), Orange(225), Yellow(125);

    private int price;

    Colour(int p)
    {
        price = p;
    }

    int getprice()
    {
        return price;
    }
}

class enum_test
{    
    public static void main(String args[])
    { 
        Colour c1;
        
        System.out.println("Green costs "+Colour.Green.getprice());

        
        System.out.println("All Colour's prices :");
        for(Colour c :Colour.values())
        System.out.println(c+" costs "+c.getprice()+" Rs.");      
    }
}