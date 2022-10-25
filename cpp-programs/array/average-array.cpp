#include<bits/stdc++.h>
using namespace std;

int main()
{
int arr[5];
int i;

for(i=0;i<5;i++)
{
 cout<<"Enter value :";
 cin>>arr[i];
}

float s = 0;
for(i=0;i<5;i++)
{
 s = s + arr[i];
}
float avg = s/5;
cout<<"Average ::: "<<avg<<endl;
}
