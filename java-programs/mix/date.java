import java.util.Date;

class date_ex
{
    public date_ex()
    {

    }

    public static void main(String args[])
     {
      Date d = new Date();
      
      System.out.println(d);
      System.out.println(d.getDate()+"/"+(d.getMonth()+1)+"/"+(d.getYear()+1900));
      
      Date d1 = new Date(2012,1,1);
      Date d2 = new Date(2015,9,2);
      
      if(d1.before(d2))
      {
        System.out.println("yes");
      }
      else
      {
        System.out.println("no");
      }
      
    }
}