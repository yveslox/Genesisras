#include<string.h>
#include<bits/stdc++.h>
using namespace std;

enum days_of_week { sun,mon,tue,wed,thu,fri,sat};

int main()
{
 days_of_week day1,day2;
 
 day1 = mon;
 
 day2 = thu;
 
 int diff = day2 - day1;
 
 cout<<"Days between day1 & day2 = "<<diff<<endl;
 
 if(day1 < day2)
 cout<<"Day1 comes before Day2."<<endl;
 
}
