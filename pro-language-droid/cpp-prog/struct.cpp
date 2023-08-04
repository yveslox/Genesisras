#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

struct Person 
{
    int id;
    int age;
    char name[50];
};

int main()
{
    struct Person person;
    person.id = 20;
    person.age = 35;
    strcpy(person.name,"John");

    cout<<"Id : "<<person.id<<endl;
    cout<<"Age : "<<person.age<<endl;
    cout<<"Name : "<<person.name<<endl;

}