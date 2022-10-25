#include<string.h>
#include<bits/stdc++.h>
using namespace std;

struct Student
{
 int rno;
 char name[25];
 float marks[5];
};

int main()
{
 int i;
 Student s;
 
 cout<<"Enter Roll number:: ";
 cin>>s.rno;
 
 cout<<"Enter name:: ";
 //fgets(s.name,24,stdin);
 cin>>s.name;
 
 for(i = 0; i<5; i++)
 {
  cout<<"Enter marks-"<<(i +1)<<" : ";
  cin>>s.marks[i];
 }
 
 cout<<"Roll number : "<<s.rno<<endl;
 cout<<"Name : "<<s.name<<endl;
 
 for(i = 0;i<5;i++)
 {
  cout<<" marks- "<<(i+1)<<" : "<<s.marks[i]<<endl;
 }
 
}
