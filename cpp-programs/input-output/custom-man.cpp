#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
using namespace std;

ostream& rupees(ostream &out)
{
    out<<"Rs. "<<fflush;
    return out;
}

ostream& dollar(ostream &out)
{
    out<<"$ "<<fflush;
    return out;
}

int main()
{
    float prc;
    cout<<"Enter price : ";
    cin>>prc;

    cout<<"Price : "<<rupees<<prc<<endl;
    cout<<"Price : "<<dollar<<prc<<endl;
}
