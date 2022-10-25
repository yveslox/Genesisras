#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class Circle
{
 private:
 
 float radius;
 
 public:
    
  Circle();
  void getradius();
  float area();
  void showradius();
};


Circle :: Circle()
{
 radius = 10;
}

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
 
 c1.showradius();
 float a = c1.area();
 cout<<"Area of circle : "<<a<<endl;
 
}
