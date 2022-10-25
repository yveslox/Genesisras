#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

const int pi = 3.14;

class shape
{
 private:
 float r;
 int h,w;
 public:
 float area(float rd)
 {
  r = rd;
  return (pi * r * r);
 }
 int area(int ht,int wt)
 {
  h = ht;
  w = wt;
  return (h * w);
 }
 
};

int main()
{
 float radius;
 int width,height;
 
 shape s;
 
 cout<<"Enter the radius of circle :"<<endl;
 cin>>radius;
 
 cout<<"Area of circle :"<<s.area(radius)<<endl;
 cout<<"Enter the height and width of the rectangle : "<<endl;
 cin>>height>>width;
 cout<<"Area of rectangle : "<<s.area(height,width)<<endl; 
}
