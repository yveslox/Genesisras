#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class Circle
{
 float radius;
 public:
 
 void init(float r);
 void getradius();
 float area();
 void showradius();

};

void Circle :: init(float r)
{
 radius = r;
}

void Circle :: getradius()
{
  cout<<"Enter radius :::";
  cin>>radius;
}
 
float Circle :: area()
{
  return PI * radius * radius ;
}
 
void Circle :: showradius()
{
  cout<<"Radius : "<<radius<<endl;
}
 
 
int main()
{
 Circle c1,c2;
 
 c1.getradius();
 c1.showradius();
 
 float a = c1.area();
 cout<<"Area of circle : "<<a<<endl;
  
}
