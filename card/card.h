#pragma once
using namespace std;
#include <string> 
class Card {        // The class
    public:          // Access specifier
        enum Suit { Club, Diamond, Heart, Spade }; //attribute
        enum Value { One, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace }; //atribute
    public:
        Card(Suit suit, Value value);
        ~Card();
    
    public:
        void printname();
        void compare(Card one);
    protected:
        Suit suit;
        Value value;

};
