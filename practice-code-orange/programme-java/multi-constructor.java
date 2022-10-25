class multiconstructor
{
public static void main(String args[])
{
sampleobject obj= new sampleobject();
sampleobject obj2= new sampleobject(12);
sampleobject obj3= new sampleobject(12,13);
sampleobject obj4= new sampleobject(12,13,14);

System.out.println(obj.num1+", "+obj.num2+", "+obj.num3);
System.out.println(obj2.num1+", "+obj2.num2+", "+obj2.num3);
System.out.println(obj3.num1+", "+obj3.num2+", "+obj3.num3);
System.out.println(obj4.num1+", "+obj4.num2+", "+obj4.num3);
}
}

class sampleobject
{

int num1=0;
int num2=0;
int num3=0;
sampleobject()
{
 this.num1=1;
}

sampleobject(int num1)
{
 this.num1=num1;
}


sampleobject(int num1,int num2)
{
 this.num1 =num1;
 this.num2 =num2;
}

sampleobject(int num1,int num2,int num3)
{
 this.num1=num1;
 this.num2=num2;
 this.num3=num3;
}
}
