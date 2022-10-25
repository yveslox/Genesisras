#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter decimal number :";
    cin>>setbase(10)>>n;

    cout<<"Decimal number : "<<setbase(10)<<n<<endl;
    cout<<"Octal number : "<<setbase(8)<<n<<endl;
    cout<<"Hexadecimal number : "<<setbase(16)<<n<<endl;
    
}