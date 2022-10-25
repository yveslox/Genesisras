#include<bits/stdc++.h>
using namespace std;

int main()
{
int sum;
int arr[5];
int i;
cout<<"Enter any five integer numbers:::";
for(i=0;i<5;i++)
{
 cin>>arr[i];
}

sum = 0;
for(i=0;i<5;i++)
{
 sum = sum + arr[i];
}
cout<<"The sum of the array elements is ::: "<<sum<<endl;
}
