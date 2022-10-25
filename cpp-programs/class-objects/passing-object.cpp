#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class Circle
{
 float radius;
 public:
 
 void setradius();
 void showradius();
 float getradius();

};


void Circle :: setradius()
{
  cout<<"Enter radius :::";
  cin>>radius;
}

void Circle :: showradius()
{
  cout<<"Radius : "<<radius<<endl;
}


float Circle :: getradius()
{
  return radius;
}
 
float calarea(Circle c)
{
  float ar;
  ar = PI * c.getradius() * c.getradius() ;
  return ar;
}

 
 
 
int main()
{
 Circle c1;
 
 c1.setradius();
 c1.showradius();
 
 float a = calarea(c1);
 cout<<"Area of circle : "<<a<<endl;
  
}
