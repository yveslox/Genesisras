#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14



class Complex 
{
   
  float x,y;  
  public :
  
  Complex(){}
  
  Complex(float real,float image)
  {
   x = real;
   y = image;
  }
  
  Complex operator+(Complex);
  
  void display(void);
  
};

Complex Complex :: operator+(Complex c)
{
 Complex temp;
 temp.x = x + c.x;
 temp.y = y + c.y;
 return temp;
}

void Complex :: display(void)
{
 cout<<x<<" + "<<y<<endl;
}


int main()
{
  Complex c1,c2,c3;
  c1 = Complex(2.5,3.5);
  c2 = Complex(1.6,2.7);
  
  c3 = c1+c2;
  
  cout<<"c1 : ";
  c1.display();
  
  cout<<"c2 : ";
  c2.display();
  
  cout<<"*************"<<endl;
  cout<<"c3 : ";
  c3.display();

return 0;
}
