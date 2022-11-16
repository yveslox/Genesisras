import java.io.*;

class create_text     
 {       
     public static void main(String args[])throws IOException
     {
      
      DataInputStream dis = new DataInputStream(System.in);
      
      FileWriter fw = new FileWriter("file1.txt");

      char ch;
      System.out.println(" Enter string ($ to end) :");
      while((ch=(char)dis.read()) != '$')
      {
        fw.write(ch);
      }
     fw.close();
      
    }
 }