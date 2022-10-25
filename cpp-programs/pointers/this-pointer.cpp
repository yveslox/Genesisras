#include<stdlib.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

class person
{
 char name[20];
 float age;
 public:
 
 person(const char *s,float a)
 {
  strcpy(name,s);
  age = a;
 }
 
 person &  greater(person &x)
 {
  if(x.age >= age)
  return x;
  else
  return *this;
 }
 
 void display(void)
 {
  cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl;
 }
};

int main()
{
 person p1("john",37.50), p2("Ahmed",29.00),p3("Hebber",40.25);
 
 person p = p1.greater(p3);
 cout<<"Elder person is "<<endl;
 p.display();
 
 p = p1.greater(p2);
 cout<<"Elder person is "<<endl;
 p.display();
 
}
