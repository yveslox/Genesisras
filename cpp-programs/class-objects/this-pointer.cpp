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
 void showaddress()
 {
  cout<<"Address of object :"<<this<<endl;
 }
};


int main()
{
 A a1, a2 ,a3;
 
 a1.showaddress();
 a2.showaddress();
 a3.showaddress();
 
}
