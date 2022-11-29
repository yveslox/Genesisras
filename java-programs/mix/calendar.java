import java.util.Calendar;

class calendar_ex
{
    public calendar_ex()
    {

    }

    public static void main(String args[])
     {
      Calendar c = Calendar.getInstance();

      System.out.println(c.get(Calendar.DATE)+"/"+(c.get(Calendar.MONTH)+1)+"/"+c.get(Calendar.YEAR));
      System.out.println(c.get(Calendar.HOUR)+"/"+(c.get(Calendar.MINUTE)+1)+"/"+c.get(Calendar.SECOND));
      System.out.println(c.get(Calendar.ZONE_OFFSET));
    }
}