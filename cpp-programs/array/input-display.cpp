#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[2][3];
int i,j;

for(i=0;i<2;i++)
{
 for(j = 0;j<3;j++)
 {
  cout<<"Enter value :";
  cin>>a[i][j];
 } 
}

cout<<endl;

cout<<"the matrix is ::"<<endl;
for(i=0;i<2;i++)
{
 for(j = 0;j<3;j++)
 {
  cout<<a[i][j]<<" ";
 } 
 cout<<"\n";
}
cout<<endl;
}
