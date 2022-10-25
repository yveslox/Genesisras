#include<bits/stdc++.h>
using namespace std;
int main()
{
string s="abcd";

//to char array
char s_array[100];
strcpy(s_array,s.c_str());

for(int i=0; i< s.length(); i++)
cout<< s_array[i];
cout<< endl;

}
