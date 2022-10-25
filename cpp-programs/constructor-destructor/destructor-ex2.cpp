#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

int c = 0;

class dest
{
  public :
  
  dest()
  {
   c++ ;
   cout<<"Constructor :"<<c<<endl;
  }
 ~dest()
 {
  cout<<"Destructor :"<<c<<endl;
  c--;
 }
 
};


int main()
{
  cout<<"Main scope : "<<endl;
  dest d1,d2,d3,d4;
  {
   cout<<"Inner block1"<<endl;
   dest d5,d6;
  }
  
  {
   cout<<"Inner block2"<<endl;
   dest d7;
  }
  
cout<<"Main scope :"<<endl;
 
}
