#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

const int Max = 5;

class A
{
 private:
 int x;
 public :
 void getx()
 {
  cout<<"Enter x :"<<endl;
  cin>>this->x;
 }
 
 void callgetx()
 {
  this->getx();
 }
 
 int showx()
 {
  return this->x;
 }
};


int main()
{
 A a1;
 
 a1.callgetx();
 cout<<" x = "<<a1.showx()<<endl; 
}
