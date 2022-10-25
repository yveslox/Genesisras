#include<stdlib.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

class String 
{
 char *ps;
 
 public:
 String(const char s[])
 {
  int len = strlen(s);
  ps = new char[len+1];
  strcpy(ps,s);
 }
 ~String()
 {
  delete ps;
 }
 
 void display()
 {
  cout<<ps<<endl;
 }
};



int main()
{
 String s1 = "Nils";
 cout<<" S1 : ";
 s1.display();
  
}
