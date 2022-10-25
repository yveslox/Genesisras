#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class data
{
 private:
 int d;
 public:
 data()
 { 
  d = 0;
 }
 
 data(int dt)
 {
  dt = 0;
 }
 
 int operator>(data obj)
 {
  if(d>obj.d)
   return 1;
  else
   return 0;
 }
 
 int operator==(data obj)
 {
  if(d==obj.d)
  return 1;
  else 
  return 0;
 }
};



int main()
{
 data t1(43),t2(20);
 
 if(t1==t2)
 cout<<"Numbers are equal "<<endl;
 else if(t1>t2)
 cout<<"t1 greater ."<<endl;
 else
 cout<<"t2 greater ."<<endl;
}
