#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random number between 1 and 10
int getCardValue() {
    return rand() % 10 + 1;
}

// Function to calculate the score of a hand
int getHandScore(int hand[], int size) {
    int score = 0;
    for (int i = 0; i < size; i++) {
        score += hand[i];
    }
    return score;
}

int main() {
    srand(time(NULL));
    const int MAX_CARDS = 10;
    int playerHand[MAX_CARDS];
    int dealerHand[MAX_CARDS];
    int playerHandSize = 0;
    int dealerHandSize = 0;

    // Deal the first two cards to the player
    playerHand[playerHandSize++] = getCardValue();
    playerHand[playerHandSize++] = getCardValue();

    // Deal the first card to the dealer
    dealerHand[dealerHandSize++] = getCardValue();

    // Player's turn
    while (true) {
        cout << "Your hand: ";
        for (int i = 0; i < playerHandSize; i++) {
            cout << playerHand[i] << " ";
        }
        cout << " (Total: " << getHandScore(playerHand, playerHandSize) << ")" << endl;

        cout << "Dealer's hand: ";
        for (int i = 0; i < dealerHandSize; i++) {
            cout << dealerHand[i] << " ";
        }
        cout << endl;

        int score = getHandScore(playerHand, playerHandSize);
        if (score > 21) {
            cout << "Bust! Your score is " << score << endl;
            break;
        }

        cout << "Hit or stand? (h/s) ";
        char choice;
        cin >> choice;

        if (choice == 'h') {
            playerHand[playerHandSize++] = getCardValue();
        } else if (choice == 's') {
            break;
        } else {
            cout << "Invalid input. Please enter h or s." << endl;
        }
    }

    // Dealer's turn
    while (getHandScore(dealerHand, dealerHandSize) < 17) {
        dealerHand[dealerHandSize++] = getCardValue();
        cout << "Dealer hits. Dealer's hand: ";
        for (int i = 0; i < dealerHandSize; i++) {
            cout << dealerHand[i] << " ";
        }
        cout << endl;
    }

    // Determine the winner
    int playerScore = getHandScore(playerHand, playerHandSize);
    int dealerScore = getHandScore(dealerHand, dealerHandSize);
    if (playerScore > 21) {
        cout << "Player busted. You lost. Your score is " << playerScore << ", dealer's score is " << dealerScore << ". " << endl;
    } else if (dealerScore > 21) {
        cout << "Dealer busted. You won. Your score is " << playerScore << ", dealer's score is " << dealerScore << ". " << endl;
    } else if (playerScore > dealerScore) {
        cout << "You won. Your score is " << playerScore << ", dealer's score is " << dealerScore << ". " <<endl;
    } else {
        cout << "It's a tie. Your score is " << playerScore << ", dealer's score is also " << dealerScore << ". " << endl;
    }

    return 0;
}
