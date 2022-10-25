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
}
