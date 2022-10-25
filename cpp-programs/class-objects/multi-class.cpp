#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class Circle
{
 private:
 
 float radius;
 
 public:
 void getradius()
 {
  cout<<"Enter radius :::";
  cin>>radius;
 }
 
 void area()
 {
  float ar;
  ar = PI * radius * radius ;
  cout<<"Area of circle : "<<ar<<endl;
 }
 
 void showradius()
 {
  cout<<"Radius : "<<radius<<endl;
 }
};

int main()
{
 Circle c1 ,c2;
 
 c1.getradius();
 c2.getradius();

 c1.showradius();
 c1.area();
 
 c2.showradius();
 c2.area(); 
 
}
