#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class Circle
{
 private: 
 float radius;
 public:
 /**
 Circle()
 {
  radius = 0.0;
  cout<<"Default constructor  [Circle]"<<endl;
 }
 
 Circle(float r)
 {
  radius = r;
  cout<<"Parameterised constructor [Circle]"<<endl;
 }
 **/
 void readradius()
 {
  cout<<"Enter radius :::";
  cin>>radius;
 }
 
 float area()
 {
  float ar;
  ar = PI * radius * radius;
  return ar;
 }

 void showradius()
 {
  cout<<"Radius : "<<radius<<endl;
 }
  
 float getradius()
 {
  return radius;
 }
};


class Cylindre : public Circle
{
 private: 
 float height;
 public:
 /**
 Cylindre() : c()
 {
  height = 0.0;
  cout<<"Default constructor [Cylindre]"<<endl;
 }
 
 Cylindre(float r,float h) : c(r)
 {
  height = h;
  cout<<"Parameterised constructor [Cylindre]"<<endl;
 }
 **/
 void readheight()
 {
  cout<<"Enter height :::";
  cin>>height;
 }
 
 float volume()
 {
  float v;
  v = PI * getradius() * getradius() * height;
  return v;
 }

 void showheight()
 {
  cout<<"Height : "<<height<<endl;
 }
 
  
};


int main()
{
 Circle c1;
 cout<<"Enter details of Circle : "<<endl;
 c1.readradius();
 cout<<"Circle : "<<endl;
 c1.showradius();
 float a = c1.area();
 cout<<"Area of circle : "<<a<<endl;

 
 Cylindre cl1;
 cout<<"Enter details of Cylindre : "<<endl;
 cl1.readradius();
 cl1.readheight();
 cout<<"Cylindre : "<<endl;
 cl1.showradius();
 cl1.showheight();
 float v = cl1.volume();
 cout<<"Volume of cylindre : "<<v<<endl;
 
}
