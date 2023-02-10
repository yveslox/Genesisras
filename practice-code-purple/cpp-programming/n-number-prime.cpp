#include<math.h>
#include<iostream>
#include<stdio.h>

using namespace std;

/* Main function */
int main()
{
    int n,i,j,m = 0,flag = 0;
    

    cout<<"Enter number of rows in pyramid: ";
    cin>>n;
    m = n/2;
    for(i = 2 ;i <= m;i++)
    {
     if(n%i == 0)
     {
        cout<<"Number is not prime."<<endl;
        flag = 1;
        break;
     }
    }
    if(flag == 0)
     cout<<"Number is prime."<<endl;

     
    return 0;
}
