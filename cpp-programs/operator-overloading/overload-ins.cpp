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
  /**
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
  }**/
  
 friend istream& operator >>(istream& , Distance&);
 friend ostream& operator <<(ostream& , Distance&);
};

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
  Distance d1;
  Distance d2;
  
  cin>>d1>>d2;
  cout<<" d1 : "<<d1<<endl;
  cout<<" d2 : "<<d2<<endl;
  /**
  d3 = d1 + d2;
  cout<<"d3 : ";
  d3.showdist();
   **/
  
}
