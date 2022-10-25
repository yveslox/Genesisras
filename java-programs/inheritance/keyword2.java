class Box 
{
    private double width;
    private double height;
    private double depth;

    Box (Box ob)
    {
      width = ob.width;
      height = ob.height;
      depth = ob.depth;
    }

    Box(double w,double h,double d)
    {
        width = w;
        height = h;
        depth = d;
    }

    Box()
    {
        width = 1;
        height = 1;
        depth = 1;
    }

    Box(double len)
    {
        width = height = depth = len;
    }

    double volume()
    {
        return width * height * depth;
    }
}

class Boxweight extends Box
{
    double weight;

    Boxweight(Boxweight ob)
    {
        super(ob);
        weight = ob.weight;
    }

    Boxweight(double w,double h,double d,double m)
    {
        super(w,h,d);
        weight = m;
    }

    Boxweight()
    {
        super();
        weight = 1;
    }
    
    Boxweight(double len,double m)
    {
        super(len);
        weight = m;
    }

}


class keyword2
{
    public static void main(String args[])
    {
        Boxweight b1 = new Boxweight(10,15,20,25.75);
        Boxweight b2 = new Boxweight(2,3,4,2.25);
        Boxweight b3 = new Boxweight();
        Boxweight b4 = new Boxweight(5,6);
        Boxweight b5 = new Boxweight(b1);
        
        double vol;

        vol = b1.volume();
        System.out.println("Volume of b1 is "+vol);
        System.out.println("Weight of b1 is "+b1.weight);
        System.out.println("");
        
        vol = b2.volume();
        System.out.println("Volume of b2 is "+vol);
        System.out.println("Weight of b2 is "+b2.weight);
        System.out.println("");


        vol = b3.volume();
        System.out.println("Volume of b3 is "+vol);
        System.out.println("Weight of b3 is "+b3.weight);
        System.out.println("");

        vol = b4.volume();
        System.out.println("Volume of b4 is "+vol);
        System.out.println("Weight of b4 is "+b4.weight);
        System.out.println("");
        
        vol = b5.volume();
        System.out.println("Volume of b5 is "+vol);
        System.out.println("Weight of b5 is "+b5.weight);
        System.out.println("");
    }
}