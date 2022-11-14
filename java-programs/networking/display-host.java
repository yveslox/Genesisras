import java.net.*;

class display_host     
 {       
     public static void main(String args[])
     { 
    
        try 
        {
         InetAddress ip = InetAddress.getByAddress(new byte[] {(byte)192, (byte)168,1,2});
         System.out.println(" "+ip.getHostName());    
        } 
        catch (UnknownHostException ue) 
        {
            // TODO: handle exception
            System.out.println("Can't find given host.");
        }
     }
 }