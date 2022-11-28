import java.util.StringTokenizer;

class string_token
{
    public string_token()
    {

    }

    public static void main(String args[])
    {
      String s = "My name is Mahesh/my nameis bharat";
      StringTokenizer st = new StringTokenizer(s," ");
      
      while(st.hasMoreTokens())
      {
        System.out.println(st.nextToken());
      }
    }
}