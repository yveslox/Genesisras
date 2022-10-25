class student 
{
    private String name;
    private int rno;

    void setname(String name,int rno)
    {
        this.name = name;
        this.rno = rno;
    }

    void display()
    {
        System.out.println("Name :"+name);
        System.out.println("Roll No:"+rno);
    }
}

class science extends student
{
    private int chem,bio,phy;

    void setmarks(int a,int b,int c)
    {
        super.setname("student 1",1);
        chem = a;
        bio = b;
        phy = c;
    }

    void display()
    {
        super.display();
        System.out.println("Chesmistry : "+chem);
        System.out.println("Biology : "+bio);
        System.out.println("physics : "+phy+"\n");
    }
}

class commerce extends student
{
    private int ac,bom,st;

    void setmarks(int a,int b,int c)
    {
        super.setname("student 2",2);
        ac = a;
        bom = b;
        st = c;
    }

    void display()
    {
        super.display();
        System.out.println("Account : "+ac);
        System.out.println("Bom : "+bom);
        System.out.println("St : "+st+"\n");
    }
}

class art extends student
{
    private int sanskrit,psychology,philosophy;

    void setmarks(int a,int b,int c)
    {
        super.setname("student 3",3);
        sanskrit = a;
        psychology = b;
        philosophy = c;
    }

    void display()
    {
        super.display();
        System.out.println("Sanskrit : "+sanskrit);
        System.out.println("Psychology : "+psychology);
        System.out.println("Philosophy : "+philosophy+"\n");
    }
}

class hier_inhe
{
    public static void main(String args[])
    {
        student stu = new student();
        science sci = new science();
        commerce com = new commerce();
        art a = new art();

        sci.setmarks(100,90,99);
        sci.display();

        com.setmarks(87,85,80);
        com.display();

        a.setmarks(89,93,98);
        a.display();
    }
}