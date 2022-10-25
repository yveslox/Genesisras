#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class member
{
  
 public:
 
 void inside()
 {
  cout<<"This is inside member function"<<endl;
 }
 void outside();
 
};
void member::outside()
{
 cout<<"This is outside member function"<<endl;
}

int main()
{
 member m;
 
 m.inside();
 m.outside();
 
}
