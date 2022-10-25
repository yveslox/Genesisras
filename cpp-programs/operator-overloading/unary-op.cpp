#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14



class increase 
{
  private : 
  int data;  
  public :
  increase()
  {
   data = 0;
  }
  
  void display()
  {
   cout<<data<<endl;
  }
  
  void operator++()
  {
   data++;
  }
};


int main()
{
  increase i1,i2;
  
  i1.display();
  i2.display();
  
  ++i1;
  ++i1;
  
  ++i2;
  
  i1.display();
  i2.display();
  
}
