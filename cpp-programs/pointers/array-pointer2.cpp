#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int a[] ={10,20,30,40,50};
 int *p;
 int i;
 
 p = &a[0];
    
 cout<<"Array element are a[i] : ";
 for(i=0;i<5;i++)
 {
  cout<<" "<<a[i];
 }
 cout<<endl;
 
 cout<<"Array element are i[a] : ";
 for(i=0;i<5;i++)
 {
  cout<<" "<<i[a];
 }
 cout<<endl;
 
 cout<<"Array element are (*(a+i)) : ";
 for(i=0;i<5;i++)
 {
  cout<<" "<<*(a+i);
 }
 cout<<endl;
 
 cout<<"Array element are *(p+i) : ";
 for(i=0;i<5;i++)
 {
  cout<<" "<<*(p+i);
 }
 cout<<endl;
 
 
 cout<<"Array element are p[i] : ";
 for(i=0;i<5;i++)
 {
  cout<<" "<<p[i];
 }
 cout<<endl;
 
 cout<<"Array element are (*p++) : ";
 for(i=0;i<5;i++)
 {
  cout<<" "<<*p++;
 }
 cout<<endl;
 
}
