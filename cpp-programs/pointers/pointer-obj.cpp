#include<string.h>
#include<bits/stdc++.h>
using namespace std;

class B
{ 
public:
 
 void display()
 { 
  cout<<"Content of base class."<<endl;
 }
};

class D: public B
{ 
public:
 
 void display()
 { 
  cout<<"Content of derived class."<<endl;
 }
};


int main()
{
 B *b;
 D d;
 
 b-> display();

 b = &d;
 b-> display();
 
}
