#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
using namespace std;



#define MAX 1


#define VAL 50

int main()
{
 int a = 10, b = 20,m;

 #if  MAX == 1
    cout<<"Maxime = "<<(a>b?a:b)<<endl;
   #else
    cout<<"Maxime = "<<(a<b?a:b)<<endl;
 #endif

}