#include<bits/stdc++.h>
using namespace std;

int main()
{

 string s="abcd";
 //append

 s.append("z");
 cout<< s<<endl;

 //rev
 string rev = string(s.rbegin(), s.rend());
 cout<<rev<<endl;

//subtring
//substr(start index,length substring)
 string tempstr="We think about food";
 cout<<tempstr.substr(3,5)<<endl;

//search for another string 
if(s.find("cd")!=string::npos)
{
  //abcdz
  int found = s.find("cd");
  cout<<"Substring found at "<<found<<" or "<<s.find("cd")<<endl;
}
else
{
  cout<<"Substring not found"<<endl;
}
//concatenate two strings
 string b="xyz";
 s.append(b);
 cout<< s << endl;
} 
