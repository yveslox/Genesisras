class convert_days
{      
    public static void main(String args[])
    { 
      int days,years,months,weeks;
      days = 1050;

      years = days / 365;
      days =days % 365;
      months = days / 30;
      days = days % 30;
      weeks = days / 7;
      days = days % 7;
      System.out.println("Years : "+ years);
      System.out.println("Months : "+ months);
      System.out.println("Weeks : "+ weeks);
      System.out.println("Days : "+ days);
    }
    
}