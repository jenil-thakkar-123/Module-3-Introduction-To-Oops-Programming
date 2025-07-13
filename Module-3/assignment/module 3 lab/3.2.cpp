#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;
int main() {
    int secretNumber, guess;

    // Initialize random seed
    srand(time(0));
    // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    cout << "Guess the number (between 1 and 100): ";
    // Loop until the correct number is guessed
    while (true) {
        cin >> guess;

        if (guess < 1 || guess > 100) {
            cout << "Invalid input. Enter a number between 1 and 100: ";
        } 
        else if (guess < secretNumber) {
            cout << "Too low. Try again: ";
        } 
        else if (guess > secretNumber) {
            cout << "Too high. Try again: ";
        } 
        else {
            cout << "Congratulations! You guessed the number." << endl;
            break;
        }   }

    return 0;   }
