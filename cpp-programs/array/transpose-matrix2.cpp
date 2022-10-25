#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[10][10];
int n,i,j,temp;

cout<<"Enter order of matrix (nxn) :::";
cin>>n;

cout<<"Enter the elements of matrix :::"<<endl;
for(i=0;i<n;i++)
{
 for(j = 0;j<n;j++)
 {
  cout<<"Enter value :";
  cin>>a[i][j];
 } 
}
cout<<endl;

cout<<"the matrix is ::"<<endl;
for(i=0;i<n;i++)
{
 for(j = 0;j<n;j++)
 {
  cout<<a[i][j]<<" ";
 } 
 cout<<"\n";
}
cout<<endl;
///////////////////////////////////////////
for(i=0;i<n;i++)
{
 for(j = 0;j<n;j++)
 {
  if( i<= j)
  {
   temp = a[i][j];
   a[i][j] = a[j][i];
   a[j][i] = temp;
  }
 } 
}

///////////////////////////////////////////////
cout<<"the matrix Transposed is :::"<<endl;
for(i=0;i<n;i++)
{
 for(j = 0;j<n;j++)
 {
  cout<<a[i][j]<<" ";
 } 
 cout<<"\n";
}
cout<<endl;


}
