
# Tic Tac Toe Game

This is a simple console-based Tic Tac Toe game written in C++.

## Features
- A dynamic board display for easy visualization.
- Player vs Computer gameplay.
- Input validation to ensure valid moves.
- Randomized computer moves for unpredictability.

## How to Play
1. Players take turns to place their marker (X or O) on the board.
2. The board is numbered from 1 to 9, corresponding to its layout:
   ```
    1 | 2 | 3
   -----------
    4 | 5 | 6
   -----------
    7 | 8 | 9
   ```
3. Enter the number corresponding to the position where you want to place your marker.
4. The game continues until one player wins or the board is full.

## Installation and Compilation
1. Clone the repository or download the source files.
2. Ensure you have a C++ compiler installed (e.g., GCC or Visual Studio).
3. Compile the files using your preferred compiler. Example using `g++`:
   ```
   g++ -Wall -std=c++11 -g -o TicTocToe  Board.cpp main.cpp CheckWinner.cpp Players.cpp
   ```
4. Run the compiled executable:
   ```
   ./TicTacToe
   ```
   
## Future Enhancements
- Add a scoring system to track wins, losses, and draws.
- Implement a more strategic AI for the computer.
- Create a GUI version of the game.

## License
This project is open-source and available for educational purposes.
