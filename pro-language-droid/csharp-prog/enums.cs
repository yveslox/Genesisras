using System;

class Program{
    enum Subjects{
        OperatingSystem,
        Web,
        Databases,
        Android,
        IOS,
        Networking,
        cloudComputing
    };
        static void Main(string[] args){
        
        int DatabasesSubject = (int)Subjects.Databases;
        int NetworkingSubject = (int)Subjects.Networking;
        
        Console.WriteLine("Databases : {0}",DatabasesSubject);
        Console.WriteLine("Networking: {0}",NetworkingSubject);
               
        }
}
