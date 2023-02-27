#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    int n;
    double sq = 1, cb = 1;
    
    cout<<"Enter the number you want to find the square root and cube root of : ";
    cin>>n;

    sq = sqrt(n);
    cb = cbrt(n);

    cout<<"The square root of number : "<<n<<" is "<<sq<<endl;
    cout<<"The square root of number : "<<n<<" is "<<cb<<endl;
    
    cout<<endl;
    return 0;
}
