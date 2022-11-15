import java.io.*;

class write_data     
 {       
     public static void main(String args[])throws IOException
     {
      DataInputStream dis = new DataInputStream(System.in);

      FileOutputStream fos = new FileOutputStream("file1.txt");
      
      BufferedOutputStream bos = new BufferedOutputStream(fos, 1024);

      System.out.println("Enter string($ to end):");
      char ch;

      while((ch=(char)dis.read()) != '$')
      {
        bos.write(ch);
      }
     bos.close();
      
    }
 }