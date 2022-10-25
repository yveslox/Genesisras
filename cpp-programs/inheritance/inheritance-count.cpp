#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14


class Counter
{
 protected:
 unsigned int count;
 public:
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
 
 Counter operator ++()
 {
  return Counter(++count);
 }

};

class Countdn : public Counter
{
 public: 
 Counter operator --()
 {
  return Counter(--count);
 }
};

int main()
{
 Countdn c1;
 cout<<"c1 : "<<c1.getcount()<<endl;
 
 ++c1;++c1;++c1;
 
 cout<<"c1 : "<<c1.getcount()<<endl;

 --c1;--c1;
 cout<<"c1 : "<<c1.getcount()<<endl;
}
