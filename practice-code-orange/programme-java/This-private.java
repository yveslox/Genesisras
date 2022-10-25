class thisprivate
{ 
 public static void main(String args[])
 {
  product obj= new product();
  obj.setdata(3,4,5);
  
  System.out.println(obj.age);
  System.out.println(obj.date);
  System.out.println(obj.sale);
  
  obj.y=6;
  System.out.println(obj.y);
 }
}

class product
{
int age;
int date;
int sale;
private int x;
public int y;

void setdata(int age,int date,int sale)
{
this.age=age;
this.date=date;
this.sale=sale;
}
}
