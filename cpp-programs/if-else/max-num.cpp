#include<bits/stdc++.h>
using namespace std;

int main()
{
int a,b,c,max;

cout<<"Enter three numbers:";
 cin>>a>>b>>c;

if((a>b) && (a>c))
 {
   max = a;
 }
else if((b>a) && (b>c))
 {
   max = b;
 }
else if((c>a) && (c>b))
 {
   max = c;
 }

cout<<"The largest number is = "<<max<<endl;

}
