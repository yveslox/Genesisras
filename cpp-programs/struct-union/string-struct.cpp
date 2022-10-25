#include<string.h>
#include<bits/stdc++.h>
using namespace std;
const int SIZE = 3;
struct Book
{
 char name[25];
 int page;
 float price;
};


int main()
{
 int i;
 Book b1[SIZE];
 
 for(i=0;i<SIZE;i++) 
 {
  cout<<"Enter the name of book :: ";
  //cin>>b.name;
  fgets(b1[i].name,24,stdin);
  cout<<"Enter number of page :: ";
  cin>>b1[i].page;
  cout<<"Enter the price of book :: ";
  cin>>b1[i].price;
  fflush(stdin);
 }
 
 cout<<endl;
 cout<<"------------------------"<<endl;
 
 for(i=0;i<SIZE;i++) 
 {
   cout<<" Name of the book : "<<b1[i].name<<endl;
   cout<<" Number of page : "<<b1[i].page<<endl;
   cout<<" Price of the book : "<<b1[i].price<<endl;
 }
}
