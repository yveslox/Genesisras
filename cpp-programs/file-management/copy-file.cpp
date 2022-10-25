#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 char ch;
 
 ifstream f1("test.txt");
 ofstream f2("test1.txt");
 
 if(!f1)
   cerr<<"Can't open in file."<<endl;
 if(!f2)
   cerr<<"Can't open out file."<<endl;
   
 while(f1 && f1.get(ch))
  f2.put(ch);
 
 cout<<"File copied successfully."<<endl;
 f1.close();
 f2.close();
  //out.close();
}
