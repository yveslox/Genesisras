#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class Circle
{
 float radius;
 public:
 
 void setradius(float radius);
 float getradius();
 float area();
 
};


void Circle :: setradius(float radius)
{
  this -> radius = radius;
}

float Circle :: getradius()
{
  return this -> radius;
}

 
float Circle :: area()
{
  return PI * radius * radius ;
}
  
int main()
{
 Circle c1;
 
 c1.setradius(10);
 c1.getradius();
 
 float a = c1.area();
 cout<<" radius : "<<c1.getradius()<<endl;
 cout<<" Area of circle : "<<a<<endl; 
}
