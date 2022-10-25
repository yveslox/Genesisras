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
  Circle(float);
  Circle(Circle&);
  void getradius();
  float area();
  void showradius();
};


Circle :: Circle()
{
 radius = 10;
}

Circle :: Circle(float r)
{
 radius = r;
}

Circle :: Circle(Circle &c)
{
 radius = c.radius;
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
 Circle c1(10);
 Circle c2(c1);
 
 c2.showradius();
 float a = c2.area();
 cout<<"Area of circle : "<<a<<endl;
 
}
