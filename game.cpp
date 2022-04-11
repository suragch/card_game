#include <iostream>
#include <list>
#include "cards.cpp"
#include <vector>
using namespace std;
Deck createCards(){
    Deck cards;
    Card aceSpades, aceHeart, aceClub, aceDiamond, kingSpades, kingHeart, kingClub, kingDiamond, queenSpades, queenHeart, queenClub, queenDiamond, jackSpades, jackHeart, jackClub, jackDiamond;

    aceSpades.rank = 52;
    aceSpades.name = "Ace of spade";
    cards.deck.push_back(aceSpades);

    aceHeart.rank = 52;
    aceHeart.name = "Ace of heart";
    cards.deck.push_back(aceHeart);

    aceClub.rank = 52;
    aceClub.name = "Ace of club";
    cards.deck.push_back(aceClub);

    aceDiamond.rank = 52;
    aceDiamond.name = "Ace of diamond";
    cards.deck.push_back(aceDiamond);

    kingSpades.rank = 48;
    kingSpades.name = "King of spade";
    cards.deck.push_back(kingSpades);

    kingHeart.rank = 48;
    kingHeart.name = "King of heart";
    cards.deck.push_back(kingHeart);

    kingClub.rank = 48;
    kingClub.name = "King of club";
    cards.deck.push_back(kingClub);

    kingDiamond.rank = 48;
    kingDiamond.name = "King of diamond";
    cards.deck.push_back(kingDiamond);

    queenSpades.rank = 44;
    queenSpades.name = "Queen of spade";
    cards.deck.push_back(queenSpades);

    queenHeart.rank = 44;
    queenHeart.name = "Queen of heart";
    cards.deck.push_back(queenHeart);

    queenClub.rank = 44;
    queenClub.name = "Queen of club";
    cards.deck.push_back(queenClub);

    queenDiamond.rank = 44;
    queenDiamond.name = "Queen of diamond";
    cards.deck.push_back(queenDiamond);

    jackSpades.rank = 40;
    jackSpades.name = "Jack of spade";
    cards.deck.push_back(jackSpades);

    jackHeart.rank = 40;
    jackHeart.name = "Jack of heart";
    cards.deck.push_back(jackHeart);

    jackClub.rank = 40;
    jackClub.name = "Jack of club";
    cards.deck.push_back(jackClub);

    jackDiamond.rank = 40;
    jackDiamond.name = "Jack of diamond";
    cards.deck.push_back(jackDiamond);

    return cards;
}
void dealDeck(Deck cards, Deck &playerOne,Deck &playerTwo){
    for(int i =0;i<cards.deck.size();i++){
        if (i > cards.deck.size()/2)
        {
            playerTwo.deck.push_back(cards.deck[i]);
        }
        else{
            playerOne.deck.push_back(cards.deck[i]);
        }
    }
}
int main(){
    Deck playerOne;
    Deck playerTwo;

    Deck cards = createCards();

    shuffle(cards);

    dealDeck(cards,playerOne,playerTwo);

    cout << "player one" << endl;
    for (auto i : playerOne.deck)
    {
        cout << i.name << " ";
    }
    cout << endl;
    cout << "player two" << endl;

    for (auto i : playerTwo.deck)
    {
        cout << i.name << " ";
    }
}
