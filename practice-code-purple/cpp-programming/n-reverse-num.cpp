#include<iostream>
#include<math.h>

using namespace std;

int findreverse(int n)
{
    int reverse = 0;
    int remainder = 0;

    while(n!=0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n/=10;
    }

    return reverse;
}


int main()
{
    int n;
    int reverse = 0;

    cout<<"Enter a positive integer to find reverse of : ";
    cin>>n;
    
    reverse = findreverse(n);
    
    cout<<"The entered number is "<<n<<" and it's reverse is : "<<reverse;
    cout<<endl;
}