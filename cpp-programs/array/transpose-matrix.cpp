#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[2][3],b[3][2];
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
///////////////////////////////////////////
for(i=0;i<2;i++)
{
 for(j = 0;j<3;j++)
 {
  b[j][i] = a[i][j];
 } 
}

///////////////////////////////////////////////
cout<<"the matrix A is ::"<<endl;
for(i=0;i<2;i++)
{
 for(j = 0;j<3;j++)
 {
  cout<<a[i][j]<<" ";
 } 
 cout<<"\n";
}
cout<<endl;

cout<<"the matrix B is ::"<<endl;
for(i=0;i<3;i++)
{
 for(j = 0;j<2;j++)
 {
  cout<<b[i][j]<<" ";
 } 
 cout<<"\n";
}
cout<<endl;


}
