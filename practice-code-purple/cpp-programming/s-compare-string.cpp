#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    const char *str1 ="welcome";
    const char *str2 ="welcome";

    const char *str3 ="welcome champion";
    const char *str4 ="welcome champion";

    cout<<"String 1 : "<<str1<<endl;
    cout<<"String 2 : "<<str2<<endl;


    if(strcmp(str1,str2) == 0)
    {
        cout<<"Both strings are equal."<<endl;
    }
    else 
    {
        cout<<"The stringd are not equal."<<endl;
    }

    cout<<"String 3 : "<<str3<<endl;
    cout<<"String 4 : "<<str4<<endl;

    if(strcmp(str3,str4)== 0)
    {
        cout<<"Both strings are equal."<<endl;
    }
    else 
    cout<<"The strings are not equal."<<endl;

    return 0;
}