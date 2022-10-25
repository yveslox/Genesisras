#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[3][3];
int i,j,spd=0,sod=0,sut=0,slt=0,sa=0;

for(i=0;i<3;i++)
{
 for(j = 0;j<3;j++)
 {
  cout<<"Enter value :";
  cin>>a[i][j];
 } 
}
cout<<endl;

for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  if(i==j)
  spd= spd + a[i][j];
  if((i + j) == 2)
  sod = sod + a[i][j];
  if(i<=j)
  sut = sut + a[i][j];
  if(i>=j)
  slt = slt + a[i][j];
  sa = sa + a[i][j];
 }
}

cout<<"the matrix A is ::"<<endl;
for(i=0;i<3;i++)
{
 for(j = 0;j<3;j++)
 {
  cout<<a[i][j]<<" ";
 } 
 cout<<"\n";
}
cout<<endl;

cout<<"Sum of elements :"<<sa<<endl;
cout<<"Sum of principal diagonal :"<<spd<<endl;
cout<<"Sum of other diagonal :"<<sod<<endl;
cout<<"Sum of upper triangle :"<<sut<<endl;
cout<<"Sum of lower traingle :"<<slt<<endl;

cout<<endl;
}
