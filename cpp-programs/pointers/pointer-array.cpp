#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int number[50] ,*ptr;
 int n,i;
 
 cout<<"How many elements are needed?"<<endl;
 cin>>n;
 
 cout<<"Enter the numbers one by one"<<endl;
 for(i=0;i<n;i++)
 cin>>number[i];
 ptr = number;
 
 int sum = 0;
 
 for(i = 0;i<n;i++)
 {
  if(*ptr%2 == 0)
  {
   sum = sum + *ptr;
  }
  ptr++;
 }
 cout<<"Sum of even numbers : "<<sum<<endl; 
}
