#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char s1[100],c ='a';
    int n1,i = 0;

    cout<<"Enter the string : ";
    cin>>s1;

    while(c!='\0')
    {
        c = s1[i++];
    }

    n1 = i-1;
    char s2[n1+1];

    cout<<"Length of the entered string "<<s1<<" is : "<<n1<<endl;

    i=0;

    while(i !=n1 +1)
    {
        s2[i] = s1[n1 -i-1];
        i++;
    }
     
    cout<<"Reverse of the entered string "<<s1<<" is : "<<s2<<endl;
    
    i = 0;

    while(i!=n1)
    {
        if(s2[i]!=s1[i])
        break;
        i++;
    }

    if(i!=n1)
    cout<<"The string "<<"\""<<s1<<"\""<<" is not palidrome "<<endl;
    else
    cout<<"The string "<<"\""<<s1<<"\""<<" is not palidrome "<<endl;

    return 0;
}