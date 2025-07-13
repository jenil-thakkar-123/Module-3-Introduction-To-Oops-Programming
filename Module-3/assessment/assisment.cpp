#include <iostream>      // for input/output
#include <cstdlib>       // for rand() and srand()
#include <ctime>         // for time()
#include <string>        // for string usage
using namespace std;

class RockPaperScissors {
private:
    string playerName;
    int totalRounds;
    int playerScore;
    int computerScore;

public:
    // Constructor to initialize scores
    RockPaperScissors() {
        playerScore = 0;
        computerScore = 0;
    }

    // Function to display the game header
    void displayHeader(string title) {
        cout << "\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n";
        cout << "           " << title << "\n";
        cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n";
    }

    // Accept player's name
    void getPlayerName() {
        displayHeader("NAME");
        cout << "Enter Your Name: ";
        cin >> playerName;
    }

    // Accept number of rounds
    void getNumberOfRounds() {
        displayHeader("ROUNDS");
        cout << playerName << ", How Many Rounds You Want To Play? : ";
        cin >> totalRounds;
    }

    // Start the game
    void playGame() {
        srand(time(0));  // Seed the random number generator

        for (int round = 1; round <= totalRounds; round++) {
            int playerChoice, computerChoice;

            displayHeader("GAME");
            cout << "Round No : " << round << "/" << totalRounds << endl;
            cout << "* " << playerName << "'s Score = " << playerScore << endl;
            cout << "* Computer Score = " << computerScore << endl;

            // Display choices
            cout << "\n1) ROCK\n2) PAPER\n3) SCISSOR\n";
            cout << "-> Select Your Choice : ";
            cin >> playerChoice;

            // Generate computer's choice
            computerChoice = (rand() % 3) + 1;
            cout << "-> Computer Choice Is : " << computerChoice << endl;

            // Determine winner
            if (playerChoice == computerChoice) {
                cout << "\nResult: Draw\n";
            } else if ((playerChoice == 1 && computerChoice == 3) ||
                       (playerChoice == 2 && computerChoice == 1) ||
                       (playerChoice == 3 && computerChoice == 2)) {
                cout << "\nResult: " << playerName << " Wins This Round!\n";
                playerScore++;
            } else {
                cout << "\nResult: Computer Wins This Round!\n";
                computerScore++;
            }

            cout << "\nPress Any Key To Continue...\n";
            cin.ignore(); // Clear input buffer
            cin.get();    // Wait for key press
        }

        // Final Result
        displayHeader("FINAL RESULT");
        cout << playerName << "'s Score = " << playerScore << endl;
        cout << "Computer Score = " << computerScore << endl;

        if (playerScore > computerScore) {
            cout << "\nCongratulations " << playerName << "! You won the game!\n";
        } else if (computerScore > playerScore) {
            cout << "\nComputer wins the game. Better luck next time!\n";
        } else {
            cout << "\nIt's a tie!\n";
        }
    }
};

int main() {
    RockPaperScissors game;  // Create object of class

    game.getPlayerName();     // Step 1: Get name
    game.getNumberOfRounds(); // Step 2: Get rounds
    game.playGame();          // Step 3–6: Play all rounds

    return 0;
}
