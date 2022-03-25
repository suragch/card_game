#include <iostream>

using namespace std;

// start game
// show the directions
// press Enter to begin
// recognize when enter is pressed
// randomly shuffle cards
// Give same number of cards to both players
// show the top two cards
// if same
//    if S cards go to player 1
//    if L cards go to player 2
// else if not same
//    if S cards go to player 2
//    if L cards go to player 1
//    if any other key then continue with next two top cards
// when a player's deck is empty then shuffle cards
// if a player has no cards then they lose

void showGameRules() {
    system("clear");
    // TODO: Update the rules
    cout << "Game Rules\n";
    cout << "1. 2 players will have 26 cards randomly\n";
    cout << "2. they will reveal their cards at same time, one by one\n";
    cout << "3. highest ranking card  will get 1 point\n";
    cout << "card rank is ace > king > queen > jack > 10 ... etc\n";
    cout << "4. if 2 players get same ranking card then player who first press the space button will get 1 point\n";
    cout << "5. if 2 players dont have same card and press space button then player will loose 1 point\n";
    cout << "6. after 26 rounds player who got highest point will be the winner\n";
    cout << "good luck :)\n";
    cout << "if you want to play press enter button\n";
    string userInput;
    cin >> userInput;
    cout << userInput << "\n";
    system("clear");
}

void pressEnterToBegin() {
    cout << "if you want to play press \"e\" then enter button\n";
    string userInput;
    cin >> userInput;
    // cout << userInput << "\n";
    system("clear");
}

int main(){
    showGameRules();
    pressEnterToBegin();
    

    return 0;
}