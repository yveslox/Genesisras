#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class objectmeth
{
 private:
  int a,b;
 public:
  
  objectmeth(int,int);
  
 void display(void)
 {
  cout<<" a : "<<a<<endl;
  cout<<" b : "<<b<<endl;
 }
};

objectmeth:: objectmeth(int x,int y)
{
 a = x;
 b = y;
}

int main()
{ 
 objectmeth obj1 = objectmeth(23,95); 
 objectmeth obj2(41,27);
 
 cout<<"Call by implicity ::"<<endl;
 obj1.display();
 
 cout<<"Call by implicity ::"<<endl;
 obj2.display();
 
}
