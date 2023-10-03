
import java.util.*;

class this_private 
{
    public static void main(String args[])
    {
        Product obj = new Product();
        obj.setdata(3,4,5);
        System.out.println("age : "+obj.age);
        System.out.println("date : "+obj.date);
        System.out.println("sale : "+obj.sale);

        obj.y = 6;
        System.out.println("y : "+obj.y);
    }
    

}

class Product
{
        int age;
        int date;
        int sale;
        private int x;
        public int y;

        void setdata(int age,int date,int sale)
        {
            this.age = age;
            this.date = date;
            this.sale = sale;
        }
}