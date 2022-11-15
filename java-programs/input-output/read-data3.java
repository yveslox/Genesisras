import java.io.*;

class read_data3     
 {       
     public static void main(String args[])throws IOException
     {
      
      FileInputStream fis = new FileInputStream("file1.txt");
      BufferedInputStream bis = new BufferedInputStream(fis);

      System.out.println(" File contents are :");
      int ch;

      while((ch=bis.read()) != -1)
      {
        System.out.print((char)ch);
      }
     fis.close();
      
    }
 }