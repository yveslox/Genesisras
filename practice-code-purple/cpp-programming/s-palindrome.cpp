#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string ispalindrome(string s)
{
    for(int i =0;i<s.length()/2;i++)
    {
        if(s[i] != s[s.length()-i-1])
        {
            return "No";
        }
    }
    return "yes";
}


int main()
{
    string s = "ABCDCBA";
    cout<<ispalindrome(s)<<endl;
   
    return 0;
}