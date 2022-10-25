#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14


class volume
{
 int length,breadth,height;
 public:
   volume(int l,int b,int h)
   {
    length = l;
    breadth = b;
    height = h;
    cout<<"Length of rectangle is : "<<length<<endl;
    cout<<"Breadth of rectangle is : "<<breadth<<endl;
    cout<<"Heigth of rectangle is : "<<height<<endl;
   }
   
   void display()
   {
    cout<<"Volume of rectangle is : "<<length*breadth*height<<endl;
   }
};


int main()
{

 volume a(5,10,10);
 a.display();
 
}
