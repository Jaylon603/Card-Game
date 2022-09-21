#include <stdlib.h>
#include<iostream>
#include "card.h"
#include <string> 
using namespace std;

//card.cpp - contains your Card class implementation
Card::Card(Suit suit, Value value)
{
    this->suit = suit;
    this->value = value;
}

Card::~Card(){

}


void Card::printname()
{
    std::string output;
    switch (this->value) {
    case Value::One:
        output += "One of ";
        break;
    case Value::Two:
        output += "Two of ";
        break;
    case Value::Three:
        output += "Three of ";
        break;
    case Value::Four:
        output += "Four of ";
        break;
    case Value::Five:
        output += "Five of ";
        break;
    case Value::Six:
        output += "Six of ";
        break;
    case Value::Seven:
        output += "Seven of ";
        break;
    case Value::Eight:
        output += "Eight of ";
        break;
    case Value::Nine:
        output += "Nine of ";
        break;
    case Value::Ten:
        output += "Ten of ";
        break;
    case Value::Jack:
        output += "Jack of ";
        break;
    case Value::Queen:
        output += "Queen of ";
        break;
    case Value::King:
        output += "King of ";
        break;
    case Value::Ace:
        output += "Ace of ";
        break;
    }
    switch (this->suit) {
    case Suit::Club:
        output += "Clubs";
        break;
    case Suit::Diamond:
        output += "Diamonds";
        break;
    case Suit::Heart:
        output += "Hearts";
        break;
    case Suit::Spade:
        output += "Spades";
        break;
    }
    std::cout << output << std::endl;
}
void Card::compare(Card one) {
    std::string output;

    cout << "Now comparing cards" << "\n";
    
    //Compare Suit
    if (this->suit == one.suit) {
        cout << "They share the same suit" << "\n";
    }
    else {
        cout << "Not the same suit" << "\n";
    }

    //Set values
    
    //Applying worth to number
    if (this->value == one.value) {
        cout << "Same value"<< "\n";
    }
    else if (this->value <= one.value) {
        cout << "Value is smaller then 2nd card" << "\n";
    }
    else if (this->value >= one.value) {
        cout << "Value is greater then 2nd card" << "\n";
    }
    cout << "Finished Comparing" << "\n";
    cout << "\n";

}