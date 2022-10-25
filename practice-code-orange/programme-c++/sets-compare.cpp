#include<bits/stdc++.h>
using namespace std;

int main()
{
//compare 2 sets
set<int> st1;
set<int> st2;

st1.insert(45);
st1.insert(46);

st2.insert(45);
st2.insert(46);

if(st1 ==st2)
   cout<<"st1 is equal to st2"<<endl;
else
   cout<<"st1 is not equal to st2"<<endl;
}
