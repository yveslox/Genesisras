#include<bits/stdc++.h>
using namespace std;

int main()
{
int arr[10],i,pos = -1, value;
int beg,end,mid;

cout<<"Enter ten numbers :::";
for(i=0;i<10;i++)
{
 cin>>arr[i];
}

cout<<"Enter the numbers to be searched :::";
cin>>value;

beg = 0;
end = 10 -1;

while(beg <= end)
{
 mid = (beg + end)/2;
 if(value == arr[mid])
 {
  pos = mid + 1;
  break;
 }
 else if(value >= arr[mid])
 beg = mid + 1;
 else
 end = mid - 1;
}

if(pos == -1)
cout<<"The element "<<value<<" not found"<<endl;
else
cout<<"The position of "<<value<<" is ::: "<<pos<<endl;

}
