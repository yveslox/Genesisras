#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

const int Max = 5;

class A
{
 private:
 int x;
 public :
  void show()
 {
  cout<<" x = "<<x<<endl;
 }
 
 void show(int x)
 {
  cout<<" x = "<<x<<endl;
 }
};


int main()
{
 A a1;
 
 a1.show();
 a1.show(100);
}
