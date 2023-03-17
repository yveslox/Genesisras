#include<iostream>
using namespace std;

int main()
{
    float cube(float);
    float num,cu;

    cout<<"Enter any number fo find cube : ";
    cin>>num;

    cu = cube(num);
    cout<<"Cube of "<<num<<" is = "<<cu<<endl;
    return 0;
}

float cube(float a)
{
    float cu;
    cu = a*a*a;
    return(cu);
}