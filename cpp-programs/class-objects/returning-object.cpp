#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class Circle
{
 float radius;
 public:
 
 void setradius();
 float getradius();
 void showradius();

};


void Circle :: setradius()
{
  cout<<"Enter radius :::";
  cin>>radius;
}


float Circle :: getradius()
{
  return radius;
}

Circle createcircle()
{
 Circle c;
 c.setradius();
 return c;
}

 
float calarea(Circle c)
{
  float ar;
  ar = PI * c.getradius() * c.getradius() ;
  return ar;
}

void Circle :: showradius()
{
  cout<<"Radius : "<<radius<<endl;
}
 
 
 
int main()
{
 Circle c1 = createcircle();
 
 c1.showradius();
 
 float a = calarea(c1);
 cout<<"Area of circle : "<<a<<endl;
  
}
