#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class Circle
{
 float radius;
 public:
 
 void getradius();
 float area();
 void showradius();

};

void Circle :: getradius()
 {
  cout<<"Enter radius :::";
  cin>>radius;
 }
 
float Circle :: area()
 {
  float ar;
  ar = PI * radius * radius ;
  return ar;
 }
 
 void Circle :: showradius()
 {
  cout<<"Radius : "<<radius<<endl;
 }
 
 
int main()
{
 Circle c1;
 
 c1.getradius();
 c1.showradius();
 
 float a =c1.area();
 cout<<"Area of circle : "<<a<<endl;
  
}
