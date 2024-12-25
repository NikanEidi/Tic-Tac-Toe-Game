#include <iostream>
#include <ctime> // For generating random numbers
#include "Players.h"

// Function for the player's move
void playerMove(char *spaces, char player) {
    int move;
    do {
        std::cout << "Enter Your Move (1-9): ";
        std::cin >> move;
        move--; // Adjust to 0-based index for the board array
        if (move >= 0 && move < 9) { // Check if the move is within the valid range
            if (spaces[move] == ' ') { // Check if the selected space is empty
                spaces[move] = player;
                break; // Exit the loop after a valid move
            } else {
                std::cout << "That space is already occupied. Try again.\n";
            }
        } else {
            std::cout << "Invalid move. Enter a number between 1 and 9.\n";
        }
    } while (true); // Keep prompting until the user makes a valid move
}

// Function for the computer's move
void computerMove(char *spaces, char computer) {
    int move;
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    while (true) {
        move = rand() % 9; // Generate a random number between 0 and 8
        if (spaces[move] == ' ') { // Check if the space is empty
            spaces[move] = computer;
            break; // Exit the loop after placing the computer's move
        }
    }
}