#include<iostream>

using namespace std;

class addition{
    public: 
    int sumof(int n1,int n2)
    {
      cout<<"Performing the addition operation :";
      return n1 + n2;
    }
    int sumof(int n1,int n2,int n3)
    {
      cout<<"Performing the addition operation :";
      return n1 + n2 + n3;
    }
    int sumof(int n1,int n2,int n3,int n4)
    {
      cout<<"Performing the addition operation :";
      return n1 + n2 + n3 + n4;
    }
};

int main()
{
    addition add;

    cout<<add.sumof(3,5)<<endl;
    cout<<add.sumof(3,5,10)<<endl;
    cout<<add.sumof(3,5,7,10)<<endl;
    
    cout<<"Exiting the main method"<<endl;

    return 0;
}