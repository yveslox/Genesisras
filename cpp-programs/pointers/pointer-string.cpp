#include<stdlib.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 char s1[25] ="Nils";
const char *ps1 = "Nils";
 char s2[25];
const char *ps2;
 
 cout<<"S1 = "<<s1<<endl;
 cout<<"ps1 = "<<ps1<<endl;
 
 ps2 = ps1;
 
 cout<<"Ps2 = "<<ps2<<endl;
 
 ps1++;
 
 cout<<"ps1 = "<<ps1<<endl;
}
