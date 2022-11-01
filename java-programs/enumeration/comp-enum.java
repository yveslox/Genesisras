enum Colour
{
    Red, Green, Blue, Black, White, Orange, Yellow
}

class comp_enum
{
    
    public static void main(String args[])
    { 
        Colour c1,c2,c3;
        
        System.out.println("All colour constants : orddinal values ");
        for(Colour c : Colour.values())
         System.out.println(c+" : "+ c.ordinal());

        c1 = Colour.Red;
        c2 = Colour.Green;
        c3 = Colour.Blue;

        if(c1.compareTo(c2) < 0)
        System.out.println(c1+" comes before "+c2);

        if(c1.compareTo(c2) > 0)
        System.out.println(c2+" comes before "+c1);

        if(c1.compareTo(c3) == 0)
        System.out.println(c1+" equals "+c3);

        if(c1.equals(c2))
        System.out.println(" Error !");

        if(c1.equals(c3))
        System.out.println(c1+" equals "+c3);

        if(c1 == c3)
        System.out.println(c1+" == "+c3);

    }
}