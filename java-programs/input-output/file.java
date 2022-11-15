import java.io.*;

class file     
 {       
     public static void main(String args[])throws Exception
     {
      File f = new File("file.java");

      System.out.println("File : "+f.getName() + (f.isFile()?"is a file " : " is not a file"));
      System.out.println("Size : "+f.length());
      System.out.println("Path : "+f.getAbsolutePath());
      System.out.println("File was last modified : "+f.lastModified());

      System.out.println(f.exists()?"File exists":"File does not exit");
      System.out.println(f.canRead()?"File can be read from":"File cannot be read from");
      System.out.println(f.canWrite()?"File can be written to":"File cannot be written to");
      System.out.println(f.isDirectory()?"File is a directory":"File is not a directory");
    }
 }