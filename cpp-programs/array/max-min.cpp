#include<bits/stdc++.h>
using namespace std;

int main()
{
int arr[5],i,j,min,max;

cout<<"Enter any five integer numbers:::";
for(i=0;i<5;i++)
{
 cin>>arr[i];
}

min = arr[0];
max = arr[0];
for(i=0;i<5;i++)
{
 if(min > arr[i])
 min = arr[i];
 if(max < arr[i])
 max = arr[i];
}

cout<<"The minimum value is ::: "<<min<<endl;
cout<<"The maximum value is ::: "<<max<<endl;

}
