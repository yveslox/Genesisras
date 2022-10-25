using System;

class program
{
 enum subjects
 {
  operatingsystem,
  web,databases,android,ios,networking,cloudcomputing
 };
 
 static void Main(String[] args)
 {
  int databasesSubject=(int)subjects.databases;
  int networkingSubject=(int)subjects.networking;
   Console.WriteLine("Databases: {0}",databasesSubject);
    Console.WriteLine("Networking: {0}",networkingSubject);
 }
}
