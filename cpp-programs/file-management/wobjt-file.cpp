
#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
using namespace std;

class Person
{
 char name[25];
 int age;
 
 public :
 
 void getdata()
 {
  cout<<"Enter name : ";
  cin.getline(name,25);
  cout<<"Enter age : ";
  cin>>age;
 }
 
 void showdata()
 {
  cout<<"Name : "<<name<<endl;
  cout<<"Age : "<<age<<endl;
 }
};

int main()
{
 Person p;
 ofstream out("person.txt");
 
 p.getdata();
 out.write((char*)&p,sizeof(p));
  
 out.close();
}
