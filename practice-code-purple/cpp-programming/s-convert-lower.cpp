#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character in lowercase :";
    cin>>ch;

    ch = ch - 32;
    cout<<"Entered character in huppercase : "<<ch<<endl;

    return 0;
}