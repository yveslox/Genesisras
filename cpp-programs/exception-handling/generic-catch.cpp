#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void test(int x)
{
 try 
 {
  if(x ==0)
     throw 'B';
  else if (x ==1)
     throw x;
  else if(x == 2)
     throw 1.0;
  cout<<"End of try-block."<<endl;
 }
 
 catch(...)
 {
  cerr<<"caught an exception."<<endl;
 }
  cout<<"End of try-catch system."<<endl;
}

int main()
{
 cout<<"Testing multiple catches."<<endl;
 cout<<"x == 0 "<<endl;
 test(0);
 cout<<"x == 1 "<<endl;
 test(1);
 cout<<"x == 2 "<<endl;
 test(2);
 cout<<"x == 3 "<<endl;
 test(3);
 
}
