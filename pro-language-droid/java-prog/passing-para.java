class passing_para 
{
    public static void main(String args[])
    {
        tstobj obj = new tstobj();
        obj.printMessage("Hello !!!");
        
    }
   
}
class tstobj
{
    String message;
    void printMessage(String text)
    {
        message = text;
        System.out.println(message);
    }
    
}