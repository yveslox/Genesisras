#include<iostream>
#include<vector>

using namespace std;

class shape{
    public:
    int l,b,s;
    public:
    void input()
    {
        cout<<"Enter the length of each side of square : ";
        cin>>s;
        cout<<endl;
        cout<<"Enter the length and breadth of the rectangle : ";
        cin>>l>>b;
        cout<<endl;
    }
    public: 
    void area(int side)
    {
      cout<<"Area of square = "<<side*side;
      cout<<endl;
    }
    void area(int length,int breadth)
    {
      cout<<"Area of rectangle = "<<length * breadth;
      cout<<endl;
    }
};

int main()
{
    shape sh;

    cout<<"calling the input function to take values"<<endl;
    sh.input();

    cout<<"calling the input function to take values of square"<<endl;
    sh.area(sh.s);

    cout<<"calling the input function to take values of rectangle"<<endl;
    sh.area(sh.l, sh.b);

    cout<<"Exiting the main method"<<endl;
    return 0;
}