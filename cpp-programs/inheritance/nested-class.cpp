#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class Circle
{
 private: 
 float radius;
 public:
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
 
 void readradius()
 {
  cout<<"Enter radius :::";
  cin>>radius;
 }
 
 void showradius()
 {
  cout<<"Radius : "<<radius<<endl;
 }
 float area()
 {
  float ar;
  ar = PI * radius * radius;
  return ar;
 }
 
 float getradius()
 {
  return radius;
 }
};


class Cylindre
{
 private: 
 float height;
 Circle c;
 public:
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
 
 void readheight()
 {
  c.readradius();
  cout<<"Enter height :::";
  cin>>height;
 }
 
 void showheight()
 {
  c.showradius();
  cout<<"Height : "<<height<<endl;
 }
 
 float volume()
 {
  float v;
  v = PI * c.getradius() * c.getradius() * height;
  return v;
 }
 
};


int main()
{
 Cylindre cl1(10.0,10.0);
 cl1.showheight();
 
 cout<<"Enter details of Cylindre : "<<endl;
 cl1.readheight();
 
 cout<<"Cylindre : "<<endl;
 cl1.showheight();
 float v = cl1.volume();
 cout<<"Volume of cylindre : "<<v<<endl;
 
}
