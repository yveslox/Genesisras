#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

void swap(int *num1, int *num2)
{
    int temp;

    temp = *num1;

    *num1 = *num2;
    
    *num2 = temp;
}

int main()
{
    int num1,num2;

    cout<<"Enter the first number : ";
    cin>>num1;

    cout<<"Enter the second number : ";
    cin>>num2;
    
    swap(&num1,&num2);

    cout<<"First number : "<<num1<<endl;
    cout<<"Second number : "<<num2<<endl;
    
    
    return 0;
}
