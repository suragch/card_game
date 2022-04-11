#include <algorithm>
#include <random>
#include <iostream>
#include <list>
#include <vector>
#include <conio.h>

using namespace std;

class Card
{
public:
    string name;
    int rank;
};

class Deck
{
public:
    vector<Card> deck;
};

class Hand
{
public:
    Deck hand;
};

Deck shuffle(Deck &deck)
{
    auto rng = default_random_engine{};
    shuffle(begin(deck.deck), end(deck.deck), rng);
    return deck;
}
void whenDraw(Deck &playerOne, Deck &playerTwo, Card firstTemp, Card secondTemp)
{
    string letter;
    cout << "enter(F/J): ";
    cin >> letter;
    switch (letter.front())
    {
    case 'f':
        playerTwo.deck.erase(playerTwo.deck.begin());
        playerOne.deck.erase(playerOne.deck.begin());
        playerOne.deck.push_back(firstTemp);
        playerOne.deck.push_back(secondTemp);
        break;
    case 'j':
        playerOne.deck.erase(playerOne.deck.begin());
        playerTwo.deck.erase(playerOne.deck.begin());
        playerTwo.deck.push_back(firstTemp);
        playerTwo.deck.push_back(secondTemp);
        break;
    default:
        cout << "Try again: ";
        return whenDraw(playerOne, playerTwo, firstTemp, secondTemp);
        break;
    }
}
void play(Deck & playerOne, Deck & playerTwo){
    char buffer;
    string letter{"f"};
    bool play{true};
    while (play)
    {
        if (playerOne.deck.size() > 0 && playerTwo.deck.size() > 0)
        {
            Card firstTemp{playerOne.deck[0]}, secondTemp{playerTwo.deck[0]};
            cout << firstTemp.name << " vs " << secondTemp.name;
            if (firstTemp.rank > secondTemp.rank)
            {
                playerOne.deck.erase(playerOne.deck.begin());
                playerTwo.deck.erase(playerTwo.deck.begin());
                playerOne.deck.push_back(firstTemp);
                playerOne.deck.push_back(secondTemp);
            }
            if (firstTemp.rank < secondTemp.rank)
            {
                playerOne.deck.erase(playerOne.deck.begin());
                playerTwo.deck.erase(playerOne.deck.begin());
                playerTwo.deck.push_back(firstTemp);
                playerTwo.deck.push_back(secondTemp);
            }
            buffer = _getch()
            if (firstTemp.rank == secondTemp.rank)
            {
                whenDraw(playerOne, playerTwo, firstTemp, secondTemp);
            }
            cout << "player one deck size" << playerOne.deck.size() << "player two deck size "<< playerTwo.deck.size() << endl;
        }else{
            if (playerOne.deck.size() == 0)
            {
                cout << "Winner is PLAYER TWO" << endl;
                play = false;
            }
            if (playerTwo.deck.size() == 0)
            {
                cout << "Winner is PLAYER ONE" << endl;
                play = false;
            }
        }
    }
}
