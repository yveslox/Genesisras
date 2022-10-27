interface shape
{
     void draw();
}


class rectangle implements shape
{
    public void draw()
    {
        System.out.println("Drawing rectangle.");
    }

}

 class triangle implements shape
{
    public void draw()
    {
        System.out.println("Drawing triangle.");
    }
}

class  poly
{
    public static void main(String args[])
    {
        shape s;

        rectangle r = new rectangle();
        s = r;
        s.draw();

        triangle t = new triangle();
        s = t;
        s.draw();
    }
}