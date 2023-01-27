#include<math.h>
#include<iostream>
#include<stdio.h>

using namespace std;

/* Main function */
int main()
{
    int i,n;
    float sum = 0,x,a =1;

    cout<<"1/2+4/5+7/8+..."<<endl;
    cout<<"How many term(ex:1,2,3..n)?:";
    cin>>n;

    for(i=0;i<n;i++)
    {
     x = a/(a+1);
     sum+=x;
     a+=3;
    }

    cout<<"sum="<<sum<<endl;
    return 0;
}

