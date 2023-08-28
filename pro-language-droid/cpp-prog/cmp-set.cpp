#include<stdio.h>
#include<bits/stdc++.h>
#include <algorithm> 
//#include<iostream.h>

using namespace std;

int main()
{
    set<int>st1;
    set<int>st2;
    st1.insert(45);
    st1.insert(46);
    st2.insert(45);
    st2.insert(46);
    
 if(st1==st2)
 cout<<"St1 is equal to st2"<<endl;
 else
 cout<<"St1 is not equal to st2"<<endl;
 cout<<endl;
}    
