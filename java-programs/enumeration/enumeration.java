enum Colour
{
    Red, Green, Blue, Black, White, Orange, Yellow
}

class  enumeration
{
    
    public static void main(String args[])
    { 
        Colour c1;
        c1 = Colour.Red;
        
        System.out.println("Value of c1 :"+c1);

        c1 = Colour.Blue;

        if(c1 == Colour.Blue)
          System.out.println("c1 contains Blue.");
        switch(c1)
        {
            case Red:
             System.out.println("c1 is Red.");
             break;
            case Green:
             System.out.println("c1 is Green.");
             break;
            case Blue:
             System.out.println("c1 is Blue.");
             break;
            case Black:
             System.out.println("c1 is Black.");
             break;
            case White:
             System.out.println("c1 is White.");
             break;
            case Orange:
             System.out.println("c1 is Orange.");
             break;
            case Yellow:
             System.out.println("c1 is Yellow.");
             break;
        }          
        
    }
}