#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class B;

class Counter
{
  
  unsigned int count;
  public :
  Counter()
  {
   count = 0;
  }
  
  Counter(int c)
  {
   count = c;
  }
   
  int getcount()
  {
   return count;
  }
  
  void operator-()
  {
   count = -count;
  }
};


int main()
{
  Counter c1(10), c2(20);
  cout<<" c1 : "<<c1.getcount()<<endl;
  cout<<" c2 : "<<c2.getcount()<<endl;
  
  -c2;
  
  cout<<" c1 : "<<c1.getcount()<<endl;
  cout<<" -c2 : "<<c2.getcount()<<endl;
     
}
