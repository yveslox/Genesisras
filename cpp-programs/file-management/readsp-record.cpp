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
 ifstream in;
 in.open("person.txt");
 
 in.seekg(0,ios::end);
 int size = in.tellg();
 int n = size /sizeof(p);
 cout<<"Number of person in file : "<<n<<endl;
 cout<<"Enter person number : ";
 cin>>n;
 int pos = (n-1) * sizeof(p);
 in.seekg(pos);
 in.read((char *)&p,sizeof(p));
 p.showdata();
  
 in.close();
}
