#include<stdio.h>
#include<string.h>

struct Person
{
int id;
int age;
char name[50];
};

int main()
{
 struct Person person;
 
 person.id=12;
 person.age=30;
 strcpy(person.name,"Tim");
 
 printf("Id : %d\n",person.id);
 printf("Age : %d\n",person.age);
 printf("Name : %s\n",person.name);
 
}
