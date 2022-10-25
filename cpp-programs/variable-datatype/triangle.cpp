#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
 float s,a,b,c,ar;
 
 cout<<"Enter the value a, b & c :";
 cin >> a >> b >> c;
 
 s = (a + b + c)/2;
 
 ar = sqrt(s * (s-a) * (s-b) * (s-c) );
 
 cout<<"Area of trangle is = "<<ar<<endl;
}

