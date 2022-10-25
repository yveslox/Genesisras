#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void divide (int x,int y,int z)
{
 cout<<"Inside divide()."<<endl;
 if((x - y) != 0)
 {
  int res = z/(x - y);
  cout<<"Result : "<<res<<endl;
 }
 else
 {
  throw(x - y);
 }
}

int main()
{
  
 try
 {
    cout<<"Inside main()."<<endl;
    divide(10,20,30);
    divide(10,10,20);
 }
 
 catch(int i)
 {
  cerr<<"Exception caught : "<<i<<endl;
 }
 cout<<"End"<<endl;  
}
 
 
