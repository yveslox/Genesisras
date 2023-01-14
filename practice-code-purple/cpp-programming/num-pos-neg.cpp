#include<iostream>

using namespace std;

int main()
{
    cout<<"=== program to check if the number is positive or negative ===\n";

    int num;

    cout<<"Enter any non-zero Number to be  checked: ";
    cin>>num;

    if(num>0)
    {
        cout<<"Entered number is positive \n";
    }
    else 
    {
        cout<<"Enter number is negative \n";
    }

    return 0;
}