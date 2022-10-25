#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14


class stat
{
 int code;
 static int count;
 
 public :
 stat()
 {
  code =++ count;
 }
 
  void showcode()
 {
  cout<<"Object number is : "<<code<<endl;
 } 
 
   static void showcount()
 {
  cout<<"Count objects : "<<count<<endl;
 }
};

int stat ::count;


int main()
{
 stat obj1, obj2;
 
 obj1.showcount();
 obj1.showcode();
 obj2.showcount();
 obj2.showcode();
 
}
