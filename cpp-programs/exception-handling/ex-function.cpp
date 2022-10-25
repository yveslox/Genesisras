#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void test(int x)//throw(char, int, double)
{
  if(x ==0)
     throw 'B';
  else if (x ==1)
     throw x;
  else if(x == 2)
     throw 1.0;
  cout<<"End of try-block."<<endl;
 
}

int main()
{
 try
 {
 cout<<"Testing "<<endl;
 cout<<"x == 0 "<<endl;
 test(0);
 cout<<"x == 1 "<<endl;
 test(1);
 cout<<"x == 2 "<<endl;
 test(2);
 cout<<"x == 3 "<<endl;
 test(3);
 }
 
 catch(char c)
 {
  cerr<<"caught a char : "<<c<<endl;
 }
 catch(int i)
 {
  cerr<<"caught a int : "<<i<<endl;
 }
 catch(double d)
 {
  cerr<<"caught a double : "<<d<<endl;
 }
 cout<<"End of try-catch system."<<endl;
}
