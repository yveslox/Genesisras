#include<bits/stdc++.h>
using namespace std;

int main()
{
int i,j,tmp;
int n[] = {0,30,40,50,10,20};

cout<<"Before sorting:::";
for(i=0;i<=5;i++)
{
 cout<<" "<<n[i];
}
cout<<endl;

n[0] = INT_MIN;

for(i=1;i<=5;i++)
{
 tmp = n[i];
 j = i -1;
 while(tmp < n[j])
 {
  n[j+1] = n[j];
  j--;
 }
 n[j+1] =tmp;
}

cout<<"After sorting:::";
for(i=1;i<=5;i++)
{
 cout<<" "<<n[i];
}
cout<<endl;
}
