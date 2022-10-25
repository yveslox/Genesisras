class shape 
{

    void draw()
    {
        System.out.println("Drawing shape.");
    }
}

class rectangle extends shape
{
    void draw()
    {
        System.out.println("Drawing rectangle.");
    }
}

class triangle extends shape
{
    void draw()
    {
        System.out.println("Drawing triangle.");
    }
}


class poly
{
    public static void main(String args[])
    {
        shape s = new shape();
        s.draw();

        rectangle r = new rectangle();
        s = r;
        s.draw();

        triangle t = new triangle();
        s = t;
        s.draw();
    }
}