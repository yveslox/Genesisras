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
 
 void inc_count()
 {
  count ++ ;
 }
 
 int getcount()
 {
  return count;
 }
};

int main()
{
 Counter c1,c2;
 cout<<" c1 : "<<c1.getcount()<<endl;
 cout<<" c2 : "<<c2.getcount()<<endl;
 
 c1.inc_count();
 c2.inc_count();
 c2.inc_count();
 
 cout<<" c1 : "<<c1.getcount()<<endl;
 cout<<" c2 : "<<c2.getcount()<<endl;
 
}
