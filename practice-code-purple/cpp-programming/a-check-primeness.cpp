#include<iostream>
#include<math.h>

using namespace std;

int checkprime(int num)
{
    if(num <=1)
    {
        return 0;
    }

    for(int j = 2;j<=num/2;j++)
    {
        if(num % j == 0)
        {
            return 0;
        }
        
    }
    
  return 1;
}


int main()
{
    int arr[] ={1,3,5,4,8,13,11};
    int n = 7;
    int count = 0;
    int isprime = 0;
    
    for(int i = 0;i<n;i++)
    {
        isprime = checkprime(arr[i]);
        if(isprime == 1)
        count++;
    }
    cout<<"count of number of primes in array : "<<count;
    
    cout<<endl;
    return 0;
}