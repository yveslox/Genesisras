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
        width = -1;
        height = -1;
        depth = -1;
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
        weight = -1;
    }
    
    Boxweight(double len,double m)
    {
        super(len);
        weight = m;
    }

}

class Boxcost extends Boxweight
{
    double cost;

    Boxcost(Boxcost ob)
    {
        super(ob);
        cost = ob.cost;
    }

    Boxcost(double w,double h,double d,double m,double c)
    {
        super(w,h,d,m);
        cost = m;
    }

    Boxcost()
    {
        super();
        cost = -1;
    }
    
    Boxcost(double len,double m,double c)
    {
        super(len, m);
        cost = c;
    }

}

class multi_inhe
{
    public static void main(String args[])
    {
        Boxcost b1 = new Boxcost(10,15,20,25.75,50.2);
        Boxcost b2 = new Boxcost(2,3,4,5.6,10.5);

        double vol;

        vol = b1.volume();
        System.out.println("Volume of b1 is "+vol);
        System.out.println("Height of b1 is "+b1.weight);
        System.out.println("Cost: Rs "+b1.cost);
        System.out.println();
        vol = b2.volume();
        System.out.println("Volume of b2 is "+vol);
        System.out.println("Height of b2 is "+b2.weight);
        System.out.println("Cost: Rs "+b2.cost);

    }
}