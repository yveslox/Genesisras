enum Colour
{
    Red, Green, Blue, Black, White, Orange, Yellow
}

class value
{
    
    public static void main(String args[])
    { 
        Colour c1;
        
        System.out.println("All colour constants: ");

        Colour clr[]=Colour.values();
        
        for(Colour c : clr)
           System.out.println(c+", ");

        c1 = Colour.valueOf("Black");
        System.out.println("c1 contains "+c1);
              
    }
}