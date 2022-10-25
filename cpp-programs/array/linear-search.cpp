#include<bits/stdc++.h>
using namespace std;

int main()
{
int arr[10],i,pos = -1, value;

cout<<"Enter ten numbers :::";
for(i=0;i<10;i++)
{
 cin>>arr[i];
}

cout<<"Enter the numbers to be searched :::";
cin>>value;

for(i=0;i<10;i++)
{
 if(value == arr[i])
 {
  pos = i + 1;
  break;
 }
}
if(pos == -1)
cout<<"The element "<<value<<" not found"<<endl;
else
cout<<"The position of "<<value<<" is :::"<<pos<<endl;

}
