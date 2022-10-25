#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14


class myclass
{
 private : 
  int t;
 public :
  myclass()
  {
   cout<<"This a constructor "<<endl;
  }
  
 ~myclass()
 {
  cout<<"This is a destructor "<<endl;
 }
 
 void set(int d)
 {
  t = d;
 }
 
 void show()
 {
  cout<<t<<endl;
 }
};


int main()
{
 myclass m1,m2;
 m1.set(2);
 m2.set(6);
 
 m1.show();
 m2.show();
 cout<<"Last statement "<<endl;
 
}
