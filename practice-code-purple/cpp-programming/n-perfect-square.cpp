#include<iostream>
#include<math.h>

using namespace std;

bool isperfectsquare(int n)
{
    int sr = sqrt(n);

    if(sr * sr == n )
    return true;
    else 
    return false;
}


int main()
{
    int n;
    bool perfect = false;

    cout<<"Enter a positive integer :";
    cin>>n;
    
    perfect = isperfectsquare(n);
    
    if(perfect)
    {
        cout<<"The entered number "<<n<<" is a perfect square of the number "<<sqrt(n);
    }
    else 
    {
        cout<<"The entered number "<<n<<" is not a perfect square ";
    }
    cout<<endl;
}