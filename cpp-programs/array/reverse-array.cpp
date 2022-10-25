#include<bits/stdc++.h>
using namespace std;

int main()
{
int arr[5];
int i,j,t;

for(i=0;i<5;i++)
{
 cout<<"Enter value "<<(i+1)<<":::";
 cin>>arr[i];
}


cout<<"The element before reverse:::";
for(i=0;i<5;i++)
{
 cout<<" "<<arr[i];
}
cout<<endl;


for(i=0,j=5-1; i< 5/2;i++,j--)
{ 
 t = arr[i];
 arr[i] = arr[j];
 arr[j] = t;
}

cout<<"After sorting:::";
for(i=0;i<5;i++)
{
 cout<<" "<<arr[i];
}

cout<<endl;
}
