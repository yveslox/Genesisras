#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[2][3],b[3][2],c[2][2];
int i,j,k;

for(i=0;i<2;i++)
{
 for(j = 0;j<3;j++)
 {
  cout<<"Enter value of A :";
  cin>>a[i][j];
 } 
}
cout<<endl;

for(i=0;i<3;i++)
{
 for(j = 0;j<2;j++)
 {
  cout<<"Enter value of B:";
  cin>>b[i][j];
 } 
}
cout<<endl;


/////////////////////////////////////////
for(i=0;i<2;i++)
{
 for(j = 0;j<2;j++)
 {
  c[i][j] = 0;
  for(k =0; k<3;k++)
  {
    c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
  }
 } 
}
////////////////////////////////////////
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

cout<<"the matrix C is ::"<<endl;
for(i=0;i<2;i++)
{
 for(j = 0;j<2;j++)
 {
    cout<<c[i][j]<<" ";
 } 
 cout<<"\n";
}
cout<<endl;

}
