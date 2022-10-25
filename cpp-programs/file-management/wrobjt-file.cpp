
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
 char ch;
 Person p;
 fstream file;
 file.open("person.txt",ios::app|ios::out|ios::in);
 
 do
 {
  cout<<"Enter Person's Data :"<<endl;
  p.getdata();
  file.write((char*)&p,sizeof(p));
  cout<<"Enter another person(y/n) : ";
  cin>>ch;
 }while(ch=='y'|| ch =='Y');
 
 file.seekg(0);
 
 file.read((char*) &p,sizeof(p));
 while(!file.eof())
 {
  p.showdata();
  file.read((char *)&p,sizeof(p));
 }
 file.close(); 
}
