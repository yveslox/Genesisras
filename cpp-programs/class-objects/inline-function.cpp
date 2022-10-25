#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class line
{
  public:
  
  inline float mul(float x,float y)
  {
   return (x*y);
  }
  
  inline float cube(float x)
  {
   return (x*x*x);
  } 
};

int main()
{
 line obj;
 
 float val1,val2;
 
 cout<<"Enter two  values : ";
 cin>>val1>>val2;
 
 cout<<"Multiplication value is : "<<obj.mul(val1,val2)<<endl;
 cout<<"Cube value is : "<<obj.cube(val1)<<" "<<obj.cube(val2)<<endl; 
}
