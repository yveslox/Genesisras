#include<stdio.h>
#include<bits/stdc++.h>
#include <algorithm> 
//#include<iostream.h>

using namespace std;

int main()
{
    map<int,int>mm;
    mm[4]=44;
    mm[1]=11;
    mm[3]=33;
    mm[5]=55;
    mm[2]=22;

 for(map<int,int>::iterator it = mm.begin();it!=mm.end();it++)
 {
    cout<<(*it).first<<" "<<(*it).second<<endl;
 }
 if(mm.find(3)!=mm.end())
 {
   cout<<"Key found "<<mm[3]<<endl;
 }
}    
