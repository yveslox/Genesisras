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
    
  int getcount()
  {
   return count;
  }
  
  void operator++()
  {
   count++;
   cout<<"Prefix increment."<<endl;
  }
  
  void operator++(int)
  {
   count++;
   cout<<"Postfix increment."<<endl;
  }
};


int main()
{
  Counter c1, c2;
  cout<<" c1 : "<<c1.getcount()<<endl;
  cout<<" c2 : "<<c2.getcount()<<endl;
  
  ++c1;
  ++c2;
  c2++;
  
  cout<<" c1 : "<<c1.getcount()<<endl;
  cout<<" c2 : "<<c2.getcount()<<endl;
     
}
