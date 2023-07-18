#include<stdio.h>
#include<string.h>

struct person
{
    int id;
    int age;
    char name[50];
};

int main()
{
    struct person person; 
    person.id = 10;
    person.age = 30;
    strcpy(person.name,"John");

    printf("Id: %d\n",person.id);
    printf("Age: %d\n",person.age);
    printf("Name: %s\n",person.name);
}