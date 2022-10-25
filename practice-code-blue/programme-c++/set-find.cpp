#include<bits/stdc++.h>
using namespace std;

int main()
{
 set<int> st;
 st.insert(33);
 st.insert(22);
 st.insert(44);
 st.insert(55);
 st.insert(11);
 
 for(set<int>::iterator it=st.begin();it!=st.end();it++)
 {
  cout<< *it <<" ";
 }
 cout<<endl;
 
 //find
 if(st.find(44)!= st.end())
 cout<<"Found"<<endl;
 if(st.find(66) == st.end())
 cout<<"Not found"<<endl;
}
