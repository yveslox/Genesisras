#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class stringfun
{
 private:
 
 char name[20];
  
 public:
 
 void concatstring(char a[], char b[])
 {
  strcat(a,b);
  strcpy(name,a);
 }
 
 void display()
 {
  cout<<"Name :"<<name<<endl;
 }
 
};

int main()
{
 char str1[10] ,str2[10];
  
 stringfun sf;
 
 cout<<"Enter your name : ";
 fgets(str1,9,stdin);
 
 cout<<"Enter your name : ";
 fgets(str2,9,stdin); 
 
 sf.concatstring(str1,str2);
 sf.display();

}
