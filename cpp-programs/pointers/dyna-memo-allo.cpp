#include<stdlib.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 const char s1[25] ="C++ Programming Examples";
 
 int len = strlen(s1);
 char *ps;
 
 ps = new char [len + 1];
 strcpy(ps,s1);
 cout<<"ps  = "<<ps<<endl;
 delete ps;
}
