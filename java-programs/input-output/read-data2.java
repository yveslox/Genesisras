import java.io.*;

class read_data2     
 {       
     public static void main(String args[])throws IOException
     {
      
      FileInputStream fis = new FileInputStream("file1.txt");
      
      System.out.println("Enter string($ to end):");
      char ch;

      while((ch=(char)fis.read()) != -1)
      {
        System.out.print((char)ch);
      }
     fis.close();
      
    }
 }