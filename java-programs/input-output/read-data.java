import java.io.*;

class read_data     
 {       
     public static void main(String args[])throws IOException
     {
      DataInputStream dis = new DataInputStream(System.in);

      FileOutputStream fos = new FileOutputStream("file1.txt");
      
      System.out.println("Enter string($ to end):");
      char ch;

      while((ch=(char)dis.read()) != '$')
      {
        fos.write(ch);
      }
     fos.close();
      
    }
 }