#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class Circle
{
 float radius;
 public:
 
 void setradius(float r);
 float getradius();
 inline float area();

};

void Circle :: setradius(float r)
{
  radius = r ;
}

float Circle :: getradius()
{
  return radius;
}
 
float Circle :: area()
{
  return PI * radius * radius ;
}
 
int main()
{
 Circle c1;
 
 c1.setradius(10);
 
 float a = c1.area();
 cout<<" Radius : "<<c1.getradius()<<endl;
 cout<<" Area of circle : "<<a<<endl; 
}
