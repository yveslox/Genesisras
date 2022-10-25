#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

//enum boolean{false,true};

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
  
  void getdist()
  {
   cout<<"Enter feet & inches : "<<endl;
   cin>>feet>>inches;
  }
  
  void showdist()
  {
   cout<<free<<"\'-"<<inches<<"\""<<endl;
  }
  
  //boolean operator <(Distance);
};

/***
Distance :: operator<(Distance dd2)
{
 float f1 = feet + (inches/12.0);
 float f2 = dd2.feet + (dd2.inches/12.0);
 //return ((f1 < f2)?true : false);
}
***/
int main()
{
  Distance d1,d2,d3;
  d1.getdist();
  
  //Distance d2(10, 6.0);
  
  cout<<"d1 : ";
  d1.showdist();

  cout<<"d2 : ";
  d2.showdist();


  //if(d1 <d2)
  //cout<<"Distance d1 < d2.";
  //else
  //cout<<"Distance d1 >= d2.";
   
}
