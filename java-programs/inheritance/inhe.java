

public class inhe
{
/**Main function**/
 public static void main(String args[])
{
    SubClass ob1 =  new SubClass();
    SupperClass ob2 =  new SupperClass();
    ob2.showmsgSuper();
    ob1.showmsgSub();    
}
}

class SupperClass
{
    int i,j,k,ans;

    void showmsgSuper()
    {
        System.out.println("This msg from Super class..!");
    }
} 

class SubClass
{
    void showmsgSub()
    {
        System.out.println("This msg from Sub class..!");
    }
} 


