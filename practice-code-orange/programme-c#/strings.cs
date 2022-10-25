using System;
namespace strings
{
 class program
 {
 
 static void Main(string[] args)
 {
  string firstname, lastname;
  firstname="Thomas";
  lastname="Gates";
  
  string fullname= firstname + lastname;
  Console.WriteLine("Full Name: {0}",fullname);
  
  char[] hello={'H','e','l','l','o',' ','W','o','r','l','d'};
  
  string helloagain= new string(hello);
  Console.WriteLine("Message : {0}",helloagain);
  
  string[] arr={"Hello","world"};
  
  string hellomessage = String.Join(" ",arr);
  Console.WriteLine("Message: {0}",hellomessage);
  
  Console.WriteLine("string length: {0}",hellomessage.Length.ToString());

  Console.WriteLine("Substring Example: {0}",hellomessage.Substring(6));
  }
 }
}
