#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 char nm[25];
 cout<<"Enter a name : ";
 cin.getline(nm,25);
 cout.write("name : ",7).write(nm,strlen(nm));
 cout<<endl;
}
