#include<string.h>
#include<bits/stdc++.h>
using namespace std;

struct Distance
{
 int feet;
 float inches;
};

struct Room
{
 Distance length;
 Distance width;
};


int main()
{
 
 Room drawing ={{12,5.5},{15,6.0}};
 
 float l = drawing.length.feet + drawing.length.inches / 12.0; 
 float w = drawing.width.feet + drawing.width.inches / 12.0;
   
 cout<<"Area of drawing room is : "<<l * w<<" square feet"<<endl;
 
}
