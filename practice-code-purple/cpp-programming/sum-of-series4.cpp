#include<math.h>
#include<iostream>
#include<stdio.h>

using namespace std;

int i,j,p=1,n,reverse;

/* Main function */
int main()
{
    cout<<"Enter the number to print a pattern\n";
    cin>>n;

    int dig = log10(n);
    cout<<"\n"<<n<<endl;

    for(i=1;i<=dig;i++)
    {
    while(n!=0)
    {
     reverse = reverse * 10;
     reverse = reverse + n%10;

     n = n /10;
    }
     n = reverse /10;
     cout<<n<<endl;
     reverse = 0;
    }
    return 0;
}

