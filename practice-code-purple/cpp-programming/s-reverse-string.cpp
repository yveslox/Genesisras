#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    char s1[100],c='a';
    int n = 0,i=0;

    cout<<"Enter the string you want reverse : ";
    cin>>s1;

    while(c!='\0')
    {
        c = s1[i];
        i++;
    }

    n = i -1;
    cout<<"Length of the entered string "<<s1<<" is : "<<n<<endl;

    char s2[i];

    i=0;

    while(i !=n +1)
    {
        s2[i] = s1[n -i-1];
        i++;
    }

    cout<<"Reverse of the entered string "<<s1<<" is : "<<s2<<endl;

    return 0;
}