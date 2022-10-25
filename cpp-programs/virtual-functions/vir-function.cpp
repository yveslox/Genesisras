#include<string.h>
#include<bits/stdc++.h>
using namespace std;

class B
{
 public:
 virtual void display()
 {
  cout<<"Content of the base class."<<endl;
 }
};

class D1 : public B
{
 public :
 void display()
 {
  cout<<"Content of first derived class."<<endl;
 }
};

class D2 : public B
{
 public:
 void display()
 {
  cout<<"Content of second derived class."<<endl;
 }
};

int main()
{
 B *b;
 
 D1 d1;
 D2 d2;
 
 b = &d1;
 b ->display();
 b =&d2;
 b -> display();
}
