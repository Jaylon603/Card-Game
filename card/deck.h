#pragma once
#include <vector>
#include "card.h"

class Deck {
public:
    Deck(int ncard);
    ~Deck();
public:
    void create();
    int shuffle(int die);
    int draws(int die);
    int reShuffle();
protected:
    std::vector<Card> deck;
};