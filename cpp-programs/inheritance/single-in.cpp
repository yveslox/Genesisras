#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class base
{
 protected :
 int val;
 public :
 void setdata(int v)
 {
  val = v;
 }
};

class Derived: public base 
{
 public:
 void cube()
 {
  cout<<"Cube of "<<val<<" is "<<val*val*val<<endl; 
 }
};

int main()
{
 Derived d;
 d.setdata(10);
 d.cube();
 
 return 0;
}
