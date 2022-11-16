import java.io.*;

class read_data4     
 {       
     public static void main(String args[])throws IOException
     {
      
      FileReader fr = null;
      try 
      {
        fr = new FileReader("file1.txt");
      } 
      catch (FileNotFoundException fnfe) 
      {
        // TODO: handle exception
        System.out.println(" File not found.");
        return ;
      }
      
      int ch;
      System.out.println(" File content are :");
      while((ch=fr.read())!= -1)
      {
        System.out.println((char)ch);
      }
     fr.close();
      
    }
 }