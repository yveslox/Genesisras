#include<iostream>
#include<math.h>

using namespace std;

bool ispalindrome(int n)
{
    int reverse = 0;
    int remainder = 0;
    
    int n1 = n;

    while(n!=0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n/=10;
    }

    if(reverse == n1)
    return true;
    else 
    return true;
}


int main()
{
    int n;
    bool palindrome = false;

    cout<<"Enter a positive integer : ";
    cin>>n;
    
    palindrome = ispalindrome(n);
    
    if(palindrome)
    {
        cout<<"The entered number "<<n<<" is a palindrome number. ";
    }
    else 
    {
        cout<<"The entered number "<<n<<" is not a palindrome number. ";
    }
    cout<<endl;
}