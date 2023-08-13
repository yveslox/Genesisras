#include<stdio.h>
#include<bits/stdc++.h>
#include <algorithm> 
//#include<iostream.h>

using namespace std;

int main()
{
    string s ="abcd";
    
    s.append("z");
    cout<<s<<endl;

    string rev = string(s.rbegin(),s.rend());
    cout<<rev<<endl;

    string tempstr ="We think about food";
    cout<<tempstr.substr(3,5)<<endl;

    if(s.find("cd")!=string::npos)
    {
        int found = s.find("cd");
        cout<<"substring found at "<<found<<" or "<<s.find("cd")<<endl;
    }
    else 
    {
        cout<<"substring not found"<<endl;
    }
    string b ="xyz";
    s.append(b);
    cout<<s<<endl;
    
}