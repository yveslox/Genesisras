#include<stdio.h>

struct detail
{
 char subtopicdefinition[10];
 float price;
};

struct item
{
 int id;
 struct detail d;
};

void main()
{
 struct item itm;
 printf("Enter item subtopicdefinition, id and price: ");
 scanf("%s%d%f",itm.d.subtopicdefinition,&itm.id,&itm.d.price);
 
 printf("Entered details are:\n");
 printf("Id: %d\nName: %s price:%f\n",itm.id, itm.d.subtopicdefinition,itm.d.price);
}

