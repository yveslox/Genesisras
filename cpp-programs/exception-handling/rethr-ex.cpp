#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void divide (double x,double y)
{

 cout<<"Inside divide()."<<endl;
 try
 {
  if(y == 0.0)
  {
   throw y;
  }
  else
  {
   cout<<"Division : "<<(x/y)<<endl;
  }
 }
 
 catch(double)
 {
  cerr<<"Caught double inside divide."<<endl;
  throw;
 }
 cout<<"End of function."<<endl;
}


int main()
{
  
 try
 {
    cout<<"Inside main()."<<endl;
    divide(20.5,10.5);
    divide(10.0,0);
 }
 
 catch(double d)
 {
  cerr<<"Exception doubles inside main : "<<endl;
 }
 cout<<"End"<<endl;  
}
 
 
