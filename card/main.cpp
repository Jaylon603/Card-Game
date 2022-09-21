// Card.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "card.h"
#include "deck.h"

using namespace std;



int main()
{
    // Create Card objects and call the constructor with different values
    Deck deck1(52);


    Card cardObj1(Card::Suit::Club, Card::Value::Seven);
    Card cardObj2(Card::Suit::Club, Card::Value::Ace);
    Card cardObj3(Card::Suit::Diamond, Card::Value::Ace);
    Card cardObj4(Card::Suit::Heart, Card::Value::King);
    Card cardObj5(Card::Suit::Spade, Card::Value::Two);

    
    // Print values
    

    cardObj1.printname();
    cardObj2.printname();
    cardObj3.printname();
    cardObj4.printname();
    cardObj5.printname();
    cardObj1.compare(cardObj2);
    cardObj2.compare(cardObj3);
}
