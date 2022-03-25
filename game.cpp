#include <iostream>
#include <list>
#include "cards.h"
#include "cards.cpp"
#include <vector>
using namespace std;

int main(){

    Deck cards;
    Card aceSpades, kingSpades, queenSpades, jackSpades;
    aceSpades.id = 1;
    aceSpades.rank = 52;
    aceSpades.name = "Ace of spade";
    cards.deck.push_back(aceSpades);
    
    kingSpades.id = 2;
    kingSpades.rank = 48;
    kingSpades.name = "King of spade";
    cards.deck.push_back(kingSpades);
    queenSpades.id = 3;
    queenSpades.rank = 44;
    queenSpades.name = "Queen of spade";
    cards.deck.push_back(queenSpades);
    
    jackSpades.id = 4;
    jackSpades.rank = 40;
    jackSpades.name = "Jack of spade";
    cards.deck.push_back(jackSpades);

    for(auto i : cards.deck){
        cout<<i.name<<endl;
    }
}