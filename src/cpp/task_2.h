#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GuessNumber() {
    srand(static_cast<unsigned>(time(nullptr)));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;


    while (true) {
        cout << "Guess the number (between 1 and 100): ";
        cin >> guess;
        attempts++;

        if (guess < 1 || guess > 100) {
            cout << "Please enter a number between 1 and 100." << endl;
            continue;
        }

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the correct number (" << secretNumber << ") in " << attempts << " attempts." << endl;
            break;
        }
    }

    return 0;
}
