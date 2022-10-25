import java.util.Random;

class randomNumber
{
 public static void main(String args[])
 {
  int i;
  Random r = new Random();
  System.out.println("5 Random numbers ( max range = 50):");
  
  for(i=1; i<=5;i++)
  System.out.println(r.nextInt(50));
 }
}
