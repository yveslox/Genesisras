#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
using namespace std;

const char *  filename ="test.txt";

int main()
{
 long sz;
 ifstream file(filename, ios::in|ios::binary);
 
 file.seekg(0,ios::end);
 sz = file.tellg();
 
 cout<<"Size of "<<filename<<endl;
 cout<<" is "<<sz<<" bytes. "<<endl;
    
 file.close();
}
