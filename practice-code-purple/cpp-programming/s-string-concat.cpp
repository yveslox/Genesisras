#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string s1,s2,s3;

    cout<<"Enter the first string : ";
    cin>>s1;

    cout<<"Enter the second string : ";
    cin>>s2;
    
    cout<<"The two string before :: "<<endl;
    cout<<"String1 = "<<s1<<" And its length is "<<s1.size()<<endl;
    cout<<"String2 = "<<s2<<" And its length is "<<s2.size()<<endl;

    s3 = s1 + s2;

    cout<<"The resulting string after  :: ";
    cout<<"String3 = string1 + string2 "<<endl;
    cout<<"String3 = "<<s3<<" And its length is "<<s3.size()<<endl;
    
   return 0;
}