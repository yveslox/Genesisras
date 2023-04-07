#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string s;

    cout<<"Enter a string without any space :";

    cin>>s;

    cout<<"The array containing the character : "<<endl;

    char carray[1024];

    strncpy(carray,s.c_str(),sizeof(carray));

    carray[sizeof(carray)-1] = 0;

    for(int i=0;carray[i]!= 0;i++ )
    {
        cout<<"carray [ "<<i<<" ] : "<<carray[i]<<endl;
    }

    cout<<endl;

    return 0;
}