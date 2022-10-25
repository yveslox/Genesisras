#include<bits/stdc++.h>
using namespace std;

int main()
{
 vector<int> mv;
 mv.push_back(4);
 mv.push_back(2);
 mv.push_back(9);
 mv.push_back(5);
 mv.push_back(1);
 
 for(vector<int>::iterator it = mv.begin(); it!=mv.end();it++)
 {
   cout<< *it <<" ";
 }
 cout<<endl;
 
//find
//vector mv: 1,2,4,5,9

vector<int>::iterator it1 = find(mv.begin(), mv.end(),5);
if(it1 != mv.end())
cout<<"found"<<endl;

vector<int>::iterator it2 = find(mv.begin(), mv.end(),6);
if(it2 != mv.end())
cout<<"found"<<endl;

//lower bound
//vector mv: 1,2,4,5,9
cout<<lower_bound(mv.begin(), mv.end(),2)-mv.begin()<<endl;//o/p :1
cout<<lower_bound(mv.begin(), mv.end(),3)-mv.begin()<<endl;//o/p :2
cout<<endl;
//upper bound
//vector mv: 1,2,4,5,9
cout<<upper_bound(mv.begin(), mv.end(),2)-mv.begin()<<endl;//o/p :2
cout<<upper_bound(mv.begin(), mv.end(),3)-mv.begin()<<endl;//o/p :2
cout<<endl;
//binary
//vector mv: 1,2,4,5,9
cout<<binary_search(mv.begin(), mv.end(),2)<<endl;
cout<<binary_search(mv.begin(), mv.end(),3)<<endl;

}
