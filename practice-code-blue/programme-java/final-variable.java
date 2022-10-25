class finalvariable
{
 public static void main(String args[])
 {
  testclass objt = new testclass();
  
  System.out.println(objt.num);
 }
}

class testclass
{
 //num cant be changed throughout the program
 final int num = 5;
}
