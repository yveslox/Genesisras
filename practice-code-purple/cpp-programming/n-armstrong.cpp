#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    int n,n1,remainder,num=0;
    
    
    cout<<"Enter a positive integer : ";
    cin>>n;
    
    n1 = n;
    while(n1!=0)
    {
        remainder = n1%10;
        num += remainder * remainder * remainder;
        n1/=10;
    }
    
    if(num == n)
    {
        cout<<n<<" is an armstrong number.";
    }
    else 
    {
        cout<<n<<" is not an armstrong number.";
    }
    
    cout<<endl;
    return 0;
}
