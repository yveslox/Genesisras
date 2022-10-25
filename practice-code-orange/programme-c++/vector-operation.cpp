#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int>mv;
mv.push_back(4);
mv.push_back(2);
mv.push_back(9);
mv.push_back(5);
mv.push_back(1);

for (vector<int>::iterator it=mv.begin();it !=mv.end();it++)
{
cout<<*it<<" ";
}
cout<<endl;

//find vector mv:1,2,3,4,5,9
vector<int>::iterator it1= find(mv.begin(),mv.end(),5);
if(it1 !=mv.end())
cout<<"Found"<<endl;

vector<int>::iterator it2= find(mv.begin(),mv.end(),6);
if(it2 ==mv.end())
cout<<"Not Found"<<endl;

//lower bound
//vector mv:1,2,3,4,5,9
cout<<lower_bound(mv.begin(),mv.end(),2)-mv.begin()<<endl;//O/P:1
cout<<lower_bound(mv.begin(),mv.end(),3)-mv.begin()<<endl;//O/P:1


//upper bound
//vector mv:1,2,3,4,5,9
cout<<upper_bound(mv.begin(),mv.end(),2)-mv.begin()<<endl;//O/P:1
cout<<upper_bound(mv.begin(),mv.end(),3)-mv.begin()<<endl;//O/P:1

//binary-search
cout<<binary_search(mv.begin(),mv.end(),2)<<endl;//O/P:1
cout<<binary_search(mv.begin(),mv.end(),3)<<endl;//O/P:1
}

