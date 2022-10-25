#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class top
{

 
 public :
 int a;
 void getdata()
 {
  cout<<"Enter first number : ";
  cin>>a;
 }
 
 void putdata()
 {
  cout<<"First number is : "<<a<<endl;
 }
 
};


class middle : public top
{
 
 public :
 
 int b;
 
 void square()
 {
  getdata();
  b = (a*a);
  cout<<"Square is : "<<b<<endl;
 }
 
};

class bottom : public middle 
{
 
 
 public :
 int c;
 
 void cube()
 {
  square();
  c = b * a;
  cout<<"cube of the number ::: "<<c<<endl;
 }
};


int main()
{
 bottom b1;

 b1.cube();
 
 return 0;
}
