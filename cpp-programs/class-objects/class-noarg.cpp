#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class testmax
{
 private:
 
 int val_a, val_b;
  
 public:
 
 void getvalue()
 {
  cout<<"Enter a : ";
  cin>>val_a;
  cout<<"Enter b : ";
  cin>>val_b;
 }
 
 void checkmax()
 {
  if(val_a > val_b)
  {
   cout<<"a is Max"<<endl;
  }
  else
  {
   cout<<"b is Max"<<endl;
  }
 }
 
};

int main()
{
 testmax tm;
 
 tm.getvalue();
 tm.checkmax();
}
