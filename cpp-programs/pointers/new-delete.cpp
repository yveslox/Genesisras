#include<stdlib.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int *p;
 int i;
 
 p = new int[5];
 
 for(i=0;i<5;i++)
 {
  cout<<"Enter value : ";
  cin>>*(p+i);
 }
 
 cout<<"Values are : ";
 for(i=0;i<5;i++)
 {
  
  cout<<" "<<*(p+i);
 }
 delete[] p;
 
 cout<<endl;
}
