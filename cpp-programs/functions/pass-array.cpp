#include<string.h>
#include<bits/stdc++.h>
using namespace std;

const int SZ = 5;

void display(int a[SZ]);

int main()
{

int ar[SZ],i;

for(i=0 ;i<SZ ;i++)
 {
 cout<<"Enter the Value ::: ";
 cin>>ar[i];
 }

display(ar);

cout<<endl;
}

void display(int a[SZ])
{
 cout<<"Values are :::";
 
 for( int i=0;i<SZ;i++)
 {
  cout<< setw(3) <<a[i];
 }
}
