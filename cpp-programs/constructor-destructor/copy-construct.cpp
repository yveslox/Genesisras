#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class code
{
 int id;
 
 public:
 code()
 {
 }
 code(int a)
 {
  id = a;
 }
 code(code &x)
 {
  id = x.id;
 }
 void display(void)
 {
  cout<<id<<endl;
 }
};


int main()
{
 code A(100);
 code B(A);
 code C = A;
 
 code D;
 D = A;
 
 cout<<"Id of A : ";A.display();
 cout<<"Id of B : ";B.display();
 cout<<"Id of C : ";C.display();
 cout<<"Id of D : ";D.display();
 
 return 0;
}
