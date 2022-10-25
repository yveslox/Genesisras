#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 char str[50]="C++ programming examples ahmedabad";
 
 ofstream ou("test.txt");
 
 for(int i = 0; str[i] !='\0';i++)
 {
  ou.put(str[i]);
 }
 cout<<"Data written characterwise."<<endl;
 ou.close();
  //out.close();
}
