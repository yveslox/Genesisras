#include<string.h>
#include<bits/stdc++.h>
using namespace std;

enum Suit { clubs, diamonds, hearts, spades};

const int jack = 11;
const int queenn = 12;
const int king = 13;
const int ace = 14;

struct card
{
 int number;
 Suit suit;
};

int main()
{
 card temp,chosen,prize;
 int position;
 
 card card1 ={7 ,clubs};
 cout<<"Card 1 is the 7 of clubs"<<endl;
 
 card card2 ={jack ,hearts};
 cout<<"Card 2 is the jack of hearts"<<endl;

 card card3 ={ace ,spades};
 cout<<"Card 3 is the ace of spades"<<endl;
 
 prize = card3;
 
 cout<<"I 'm swapping card 1 and card 3 "<<endl;
 temp = card3;
 card3 = card1;
 card1 =temp;
 
 cout<<"I 'm swapping card 2 and card 3 "<<endl;
 temp = card3;
 card3 = card2;
 card2 =temp;

 cout<<"I 'm swapping card 1 and card 2 "<<endl;
 temp = card2;
 card2 = card1;
 card1 =temp;
 
 cout<<"--------------------------------------"<<endl;
 cout<<"Now, where (1,2, or 3) is the ace of spades? ::: ";
 cin>>position;
 
 switch( position)
 {
  case 1:
    chosen = card1;
    break;
  case 2:
    chosen = card2;
    break;
  case 3:
    chosen = card3;
    break;
 }
 if(chosen.number == prize.number && chosen.suit == prize.suit )
 cout<<"That's right you win!"<<endl;
 else
 cout<<"Sorry you lose. "<<endl;
  
}
