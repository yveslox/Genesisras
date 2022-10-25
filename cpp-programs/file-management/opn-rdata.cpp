#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 char ch;
 
 ifstream in("test.txt");
 while(in)
 {
  in.get(ch);
  cout<<ch;
 }
 cout<<endl;
 in.close();
  //out.close();
}
