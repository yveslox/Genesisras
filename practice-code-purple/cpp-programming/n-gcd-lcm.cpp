#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    int n1,n2,i;
    int gcd = 1, lcm = 1;
    
    cout<<"Enter the number two numbers you want to find the gcd and lcm of : ";
    cin>>n1>>n2;

    for(i = 1;i<1000;i++)
    {
        if((n1 %i == 0)&& (n2%i == 0))
        {
            gcd = i;
        }
    }

    lcm = (n1 * n2)/gcd;

    cout<<"The gcd of the two numbers : "<<n1<<" and "<<n2<<" is "<<gcd<<endl;
    cout<<"The lcm of the two numbers : "<<n1<<" and "<<n2<<" is "<<lcm<<endl;
    
    
    return 0;
}
