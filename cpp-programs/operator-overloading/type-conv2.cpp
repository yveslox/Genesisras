#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

const float CF = 3.280833;

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
  
  Distance(float m)
  {
   float ft = m * CF;
   feet = (int)ft;
   inches = 12 * (ft - feet);
  }

  
  Distance(int ft,float in)
  {
   feet = ft;
   inches = in;
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
  
  operator float()
  {
   float ft = feet + (inches/12.0);
   return (ft/CF);
  } 
};

/**
 istream& operator >>(istream &in , Distance &d)
{
 cout<<"Enter feet & inches ::";
 in>>d.feet>>d.inches;
 return in;
}
 
  ostream& operator <<(ostream &out , Distance &d)
{
 cout<<d.feet<<"\'-"<<d.inches<<"\""<<endl;
 return out;
}

/**
Distance operator +(Distance dd1,Distance dd2)
{
 Distance dd3;
 dd3.feet = dd1.feet + dd2.feet;
 dd3.inches = dd1.inches + dd2.inches;
 
 if(dd3.inches >= 12.0)
 {
  dd3.inches -= 12.0;
  dd3.feet++;
 } 
 return dd3;
}
**/

int main()
{
  Distance d1 = 1.0;
  cout<<"d1 : ";
  d1.showdist();
  
  d1 = 2.0;
  cout<<"d1 : ";
  d1.showdist();
  
  Distance d2(10 , 6.0);
  float m = float(d2);
  cout<<" Meters :"<<m<<endl;
  
  m = d1;
  cout<<" Meters : "<<m<<endl;
 /**
  d3 = d1 + d2;
  cout<<"d3 : ";
  d3.showdist();
   **/
  
}
