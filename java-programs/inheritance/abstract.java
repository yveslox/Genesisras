abstract class shape
{
  abstract void draw();
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


class polyabstract
{
    public static void main(String args[])
    {
        shape s ;
        
        rectangle r = new rectangle();
        s = r;
        s.draw();

        triangle t = new triangle();
        s = t;
        s.draw();
    }
}