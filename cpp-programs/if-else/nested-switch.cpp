#include<bits/stdc++.h>
using namespace std;

int main()
{
int a = 100;
int b = 200;

switch(a)
{
 case 100:
 cout<<"In outer switch."<<endl;
 switch(b)
 {
  case 200:
  cout<<"In inner switch."<<endl;
 }
 
}
cout<<"Value of a is : "<<a<<endl;
cout<<"Value of b is : "<<b<<endl;
}
