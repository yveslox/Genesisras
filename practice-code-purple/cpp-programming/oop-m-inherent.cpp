#include<iostream>
#include<vector>

using namespace std;

class rectangle{
    public:
    float length,breadth;
    public:
    rectangle()
    {
        cout<<"inside constructor"<<endl;
        length=2;
        breadth=4;
    }
    public: 
    ~rectangle()
    {
        cout<<"inside destructor"<<endl;
    }
};

int main()
{
    cout<<"calling the default constructor and destructor"<<endl;
    

    rectangle rect;
    cout<<"calling the input function to take values of rectangle"<<endl;
    cout<<"The length of the rectangle "<<rect.length<<endl;
    cout<<"The breadth of the rectangle "<<rect.breadth<<endl;
    cout<<"Exiting the main method"<<endl;
    return 0;
}