import java.net.*;

class display_url     
 {       
     public static void main(String args[])throws Exception
     { 
      URL ob = new URL("http://www.bethedevelopper.com/java/");
      System.out.println("Protocol : "+ob.getProtocol());
      System.out.println("Host : "+ob.getHost());
      System.out.println("File : "+ob.getFile());
      System.out.println("Port : "+ob.getPort());
      System.out.println("Path : "+ob.getPath());
      System.out.println("URL : "+ob.toString());
     }
 }