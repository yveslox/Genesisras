#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 char name[25];
 int age;
 
 ofstream out("test.txt");
 cout<<"Enter name : ";
 cin.getline(name,25);
 cout<<"Enter age : ";
 cin>>age;
 
 out<<name<<endl;
 out<<age<<endl;
 out.close();
 
 
 ifstream in("test.txt");
 in>>name;
 cout<<"Name : "<<name<<endl;
 in>>age;
 cout<<"Age : "<<age<<endl;
 in.close();
  //out.close();
}
