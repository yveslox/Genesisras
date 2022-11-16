import java.io.*;
import java.util.*;

class Student implements Serializable
{
 int rno;
 String sname;
 double marks;

 Student(int r, String nm, double m)
 {
    rno = r;
    sname = nm;
    marks = m;
 }

 
 void display()
 {
    System.out.println("Roll no : "+rno);
    System.out.println("Name : "+sname);
    System.out.println("Marks : "+marks);
 }

 public static Student getData() throws IOException
 {
   int r;
   String nm;
   double m;

   BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

   System.out.print("Enter roll number : ");
   r = Integer.parseInt(br.readLine());

   System.out.print("Enter name : ");
   nm = br.readLine();

   System.out.print("Enter total marks : ");
   m = Double.parseDouble(br.readLine());
   
   Student s = new Student(r,nm,m);
   return s;
 }
}

class serialize2     
 {       
     public static void main(String args[])throws Exception
     {
      
      FileOutputStream fos = new FileOutputStream("stuFile");

      ObjectOutputStream oos = new ObjectOutputStream(fos);

      Student s = Student.getData();

      oos.writeObject(s);

      oos.close();
      
    }
 }