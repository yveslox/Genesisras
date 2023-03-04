#include<iostream>
#include<math.h>

using namespace std;

bool isprime(int n)
{
    if(n == 1)
    return false;
    for(int i = 2; i<= sqrt(n);i++)
    {
      if(n % i == 0)
      return false;
    }

    return true;
}


int main()
{
    int n;
    bool prime = false;

    cout<<"Enter a positive integer other than 1 : ";
    cin>>n;
    
    prime = isprime(n);
    
    if(prime)
    {
        cout<<"The entered number "<<n<<" is a prime number ";
    }
    else 
    {
        cout<<"The entered number "<<n<<" is composite number";
    }
    cout<<endl;
}