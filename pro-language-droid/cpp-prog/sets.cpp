#include<stdio.h>
#include<bits/stdc++.h>
#include <algorithm> 
//#include<iostream.h>

using namespace std;

int main()
{
    set<int>st;
    st.insert(33);
    st.insert(22);
    st.insert(44);
    st.insert(55);
    st.insert(11);
    
 for(set<int>::iterator it = st.begin();it!=st.end();it++)
 {
    cout<<(*it)<<" ";
 }
 cout<<endl;
}    
