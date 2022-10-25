#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class Distance 
{
  private : 
  int feet;
  float inches;  
  public :
  Distance()
  {
   feet = 0;
   inches = 0.0;
  }
  
  Distance(int ft,float in)
  {
   feet = ft;
   inches = in;
  }
  
  Distance(float f)
  {
   feet = int(f);
   inches = 12*(f - feet);
  }
  
  void getdist()
  {
   cout<<"Enter feet & inches : "<<endl;
   cin>>feet>>inches;
  }
  
  void showdist()
  {
   cout<<free<<"\'-"<<inches<<"\""<<endl;
  }
  
  Distance operator +(Distance);
};


Distance Distance :: operator +(Distance dd2)
{
 Distance dd3;
 dd3.feet = feet + dd2.feet;
 dd3.inches = inches + dd2.inches;
 
 if(dd3.inches >= 12.0)
 {
  dd3.inches -= 12.0;
  dd3.feet++;
 } 
 return dd3;
}

int main()
{
  Distance d1(12, 9.0);
  Distance d2(10, 6.0);
  Distance d3,d4,d5;

  d3 = d1 + d2;
  cout<<"d3 : ";
  d3.showdist();

  d4 = d1 + 10.0;
  cout<<"d4 : ";
  d4.showdist();

    
}
