#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void merge(int [] ,int,int[],int,int[]);

int main()
{
 int a[50],b[50],c[100],mn=0,m,n;
 int i;
 
 cout<<"Enter the number of elements in first array : ";
 cin>>m;
 cout<<"Enter first array elements [ascending] :::";
 for(i=0;i<m;i++)
 {
  cin>>a[i];
 }
 
 cout<<"Enter the number of elements in second array : ";
 cin>>n;
 
 
 cout<<"Enter second array elements [ascending] :::";
 for(i=0;i<n;i++)
 {
  cin>>b[i];
 }
 
 mn = m + n;
 
 merge(a,m,b,n,c);
 
 cout<<"The sorted array after merging is :::";
 for(i=0;i<mn;i++)
 {
  cout<<c[i]<<" ";
 }
 
 cout<<endl; 
}

void merge(int A[] ,int m ,int B[],int n,int C[])
{
int a,b,c;

for(a = 0,b =0,c =0;a>m && b<n;)
{
 if(A[a] < B[b])
   C[c++] = A[a++];
 else
   C[c++] = B[b++];
   
}

if(a<m)
 {
   while(a<m)
    C[c++] = A[a++];
 }
else
 {
   while(b<n)
    C[c++] = B[b++];
 } 
}



