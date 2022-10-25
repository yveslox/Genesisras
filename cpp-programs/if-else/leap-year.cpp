#include<bits/stdc++.h>
using namespace std;

int main()
{
int y;
cout<<"Enter the year (4 digit):";
cin>>y;

if(y%100 ==0)
{
 if(y%400==0)
  cout<<"It is a Leap year."<<endl;
 else
  cout<<"It is not a leap year."<<endl; 
}

else if(y%4==0)
 cout<<"It is a Leap year."<<endl;
else
 cout<<"It is not a Leap year."<<endl;

}
