#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void checkrange(int num);
void checkrange1(int num);
void checkrange2(int num);
void checkrange3(int num);
void checkrange4(int num);

void checkdigit1(int num);
void checkdigit2(int num);
void checkdigit3(int num1,int num2);

int main()
{
int num;
printf("Enter a number:");
scanf("%d",&num);

printf("Entered number in words: ");
if(num <=100)
 checkrange1(num);
else if(num>100 && num<1000)
 checkrange2(num);
else if(num>=1000 && num<=100000)
 checkrange3(num);
else if(num>100000 && num<=10000000)
 checkrange4(num);
else 
 checkrange(num);
}
///////////////////////////////////////////
void checkrange( int num)
{
 printf("Entered number should be betweeen 0 to 10000000\n");
}
//////////////////////////////////////////////////
void checkrange1( int num)
{
 int x,y,z;
 if(num>=0 && num<=10)
 checkdigit1(num);
 else if(num>10 && num<20)
 {
  x = num%10;
  checkdigit2(num);
 }
 
 else if(num>=20 && num<=100)
 {
  x = num/10;
  z = num % 10;
  checkdigit3(y,z);
 }
}


//////////////////////////////////////////
void checkrange2(int num)
{
 int x,y,z;
 y = num/100;
 checkdigit1(y);
 printf("Hundred ");
 x = num%100;
 checkrange1(x);
}

///////////////////////////////////////////
void checkrange3(int num)
{
 int x,y,z;
 if(num==1000)
 {
  printf("Thousand ");
  exit(0);
 }
 else if(num==100000)
 {
  printf("Lakh ");
  exit(0);
 }
 else
 {
  x = num/1000;
  checkrange1(x);
  printf("Thousand ");
  z = num % 1000;
  if(z<=99)
  checkrange1(z);
  else
  checkrange2(z);
 }
}
///////////////////////////////////////
void checkrange4(int num)
{
 int x,y;
 if(num ==10000000)
 {
  printf("One crore ");
  exit(0);
 }
 
 x = num/100000;
 checkrange1(x);
 printf("Lakhs ");
 y = num%10000;
 if(y==0)
 exit(0);
 else if(y<=99)
 checkrange1(y);
 else if(y>99 && y<=999)
 checkrange2(y);
 else
 checkrange3(y);
}
////////////////////////////////////
void checkdigit1(int num)
{
 switch(num)
 {
  case 0:printf("Zero ");break;
  case 1:printf("One ");break;
  case 2:printf("Two ");break;
  case 3:printf("Three ");break;
  case 4:printf("Four ");break;
  case 5:printf("Five ");break;
  case 6:printf("Six ");break;
  case 7:printf("Seven ");break;
  case 8:printf("Eight ");break;
  case 9:printf("Nine ");break;
  case 10:printf("Ten ");break;
  default:printf(" ");
 }
}

/////////////////////////////////////////
void checkdigit2(int num)
{
 switch(num)
 {
  case 1:printf("Eleven ");break;
  case 2:printf("Twelve ");break;
  case 3:printf("Thirteen ");break;
  case 4:printf("Fourteen ");break;
  case 5:printf("Fifteen ");break;
  case 6:printf("Sixteen ");break;
  case 7:printf("SevenTeen ");break;
  case 8:printf("Eighteen ");break;
  case 9:printf("Nineteen ");break;
  default:printf(" ");
 }
}
///////////////////////////////////////
void checkdigit3(int num1,int num2)
{
 switch(num1)
 {
  case 2:printf("Twenty ");break;
  case 3:printf("Thirty ");break;
  case 4:printf("Forty ");break;
  case 5:printf("Forty ");break;
  case 6:printf("Sixty ");break;
  case 7:printf("Seventy ");break;
  case 8:printf("Eighty ");break;
  case 9:printf("Ninety ");break;
  case 10:printf("Hundred ");break;
  default:printf(" ");
 }
 checkdigit1(num2);
}
