#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>    // For time()
using namespace std;

int main() {
    string choices[] = {"Rock", "Paper", "Scissors"};
    int playerChoice, computerChoice;
    char playAgain;

    srand(time(0)); // Seed random number generator

    cout << "🎮 Welcome to Rock, Paper, Scissors!" << endl;

    do {
        // Display menu
        cout << "\nChoose an option:" << endl;
        cout << "0 - Rock" << endl;
        cout << "1 - Paper" << endl;
        cout << "2 - Scissors" << endl;
        cout << "Enter your choice (0-2): ";
        cin >> playerChoice;

        // Random choice for computer
        computerChoice = rand() % 3;

        cout << "You chose: " << choices[playerChoice] << endl;
        cout << "Computer chose: " << choices[computerChoice] << endl;

        // Game logic
        if (playerChoice == computerChoice) {
            cout << "🤝 It's a draw!" << endl;
        } else if ((playerChoice == 0 && computerChoice == 2) ||
                   (playerChoice == 1 && computerChoice == 0) ||
                   (playerChoice == 2 && computerChoice == 1)) {
            cout << "🎉 You win!" << endl;
        } else {
            cout << "😢 You lose!" << endl;
        }

        // Ask to play again
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}
