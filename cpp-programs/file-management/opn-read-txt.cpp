#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 char str[50];
 
 ifstream in("test.txt");
 while(in)
 {
  in.getline(str, 50);
  cout<<str<<endl;
 }
 in.close();
  //out.close();
}
