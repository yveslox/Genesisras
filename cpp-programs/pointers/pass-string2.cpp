#include<stdlib.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void display(char *);

int main()
{
  char s1[25] = "Nils";
  display(s1);
  cout<<endl;
}

void display(char *ps)
{
 while(*ps)
 {
  cout<<*ps;
  ps++;
 }
}
