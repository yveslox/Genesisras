#include<string.h>
#include<bits/stdc++.h>
using namespace std;

struct Book
{
 char name[25];
 char author[20];
 float price;
};


int main()
{
 Book b;
 
 cout<<"Enter the name of book :: ";
 //cin>>b.name;
 fgets(b.name,24,stdin);
 
 cout<<"Enter the author of name :: ";
 //cin>>b.author;
 fgets(b.author,19,stdin);
 
 cout<<"Enter the price of book :: ";
 cin>>b.price;

 cout<<"------------------------"<<endl;
 cout<<" Name of the book : "<<b.name<<endl;
 cout<<" Author of the book : "<<b.author<<endl;
 cout<<" Price of the book : "<<b.price<<endl;
 
}
