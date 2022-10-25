class staticvariable
{
private String first;
private String last;
private static int members=0;

public staticvariable(String fn, String ln)
{
first=fn;
last=ln;
members++;

System.out.println("Members in the club: "+members);
}

public String getfirst()
{
return first;
}

public String getlast()
{
return last;
}

public static int getmembers()
{
return members;
}
}


class Mainclass
{
public static void main(String args[])
{
staticvariable obj1= new staticvariable("Abc","Bcd");
staticvariable obj2= new staticvariable("Cde","Def");
staticvariable obj3= new staticvariable("Efg","Fgh");

System.out.println(obj2.getfirst());
System.out.println(staticvariable.getmembers());
}
}
