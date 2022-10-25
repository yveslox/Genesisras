#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[])
{
 char ch;
 if(argc !=3)
 {
  cerr<<"Format : copy source dest"<<endl;
  exit(1);
 }
 
 ifstream in(argv[1], ios ::binary);
 if(!in)
   {
    cerr<<"Can't open in file."<<endl;
    exit(1);
   }
   
 ofstream out(argv[2], ios::binary);
 if(!out)
   {
    cerr<<"Can't open out file."<<endl;
    exit(1);
   }
   
 while(in.get(ch))
  out.put(ch);
 
 cout<<"File copied successfully."<<endl;
 in.close();
 out.close();
  //out.close();
}
