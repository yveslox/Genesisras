#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14


class Counter
{
  
  unsigned int count;
  public :
  Counter()
  {
   count = 0;
  }
  
  Counter(int cnt)
  {
   count = cnt;
  }
    
  int getcount()
  {
   return count;
  }
  
  Counter operator++()
  {
   count++;
   return Counter(count);
  }
};


int main()
{
  Counter c1, c2;
  cout<<" c1 : "<<c1.getcount()<<endl;
  cout<<" c2 : "<<c2.getcount()<<endl;
  
  ++c1;
  c2 = ++c1;
  
  cout<<" c1 : "<<c1.getcount()<<endl;
  cout<<" c2 : "<<c2.getcount()<<endl;
     
}
