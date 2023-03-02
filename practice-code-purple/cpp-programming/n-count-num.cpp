#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    int n,n1,num=0;
    
    cout<<"Enter a positive integer : ";
    cin>>n;
    
    n1 = n;
    
    while(n!=0)
    {
        n/=10;
        num++;
    }
    
    cout<<" The number digits in the entered number : "<<n1<<" is "<<num;
    
    cout<<endl;
    return 0;
}
