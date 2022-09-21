#pragma once
#include <vector>
#include "card.h"
#include "deck.h"
Deck::Deck(int ncards)
{
    for (int x = 0; x < ncards; x++) {
        Card card(Card::Suit::Club, Card::Value::Two);
        card.printname();
        this->deck.push_back(card);
    }
}
//destructor
Deck::~Deck() {
   for (int x = 0; x < this->deck.size(); x++) {
        delete this->deck[x];
    }
}