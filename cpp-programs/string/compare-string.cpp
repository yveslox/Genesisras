#include<string.h>
#include<bits/stdc++.h>
using namespace std;

const int Max = 80;

int main()
{
char mpass[12] ="Computer",npass[12];
int ctr = 0;
cout<<"Enter your password :::";
cin>>npass;

ctr = strcmp(mpass,npass);

if(ctr ==0)
cout<<" Correct password!! "<<endl;
else
cout<<" Wrong password!! "<<endl;
}
