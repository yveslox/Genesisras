#include<bits/stdc++.h>
using namespace std;

int main()
{
//union of two vectors

vector<int> v1;
v1.push_back(1);
v1.push_back(22);
v1.push_back(3);
v1.push_back(4);
sort(v1.begin(),v1.end());


vector<int> v2;
v2.push_back(3);
v2.push_back(41);
v2.push_back(9);
v2.push_back(10);
sort(v2.begin(),v2.end());

vector<int> v3;

set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),inserter(v3, v3.begin() ));

cout<<"Intersection"<<endl;
for(vector<int> ::iterator it=v3.begin(); it!=v3.end(); it++)
{
cout<< *it <<" ";
}

cout<<endl;
}

