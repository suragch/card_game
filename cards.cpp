#include <algorithm>
#include <random>
#include <iostream>
#include <list>

using namespace std;

class Card{
    public:
    string name;
    int id;
    int rank;
};

class Deck{
    public:
    list<Card> deck;
};

class Hand{
    public:
    Deck hand;
};
//shuffle ni deck awaad deck butsaaj ugnu
Deck shuffle(Deck deck){
// random_shuffle(deck.deck.begin(), deck.deck.end());
return deck;
}