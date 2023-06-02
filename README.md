# Tic-Tac-Toe

This is a simple implementation of the Tic-Tac-Toe game in C++. It allows two players to take turns placing their marks ('X' and 'O') on a 3x3 grid. The game continues until one of the players wins by getting three marks in a row (horizontally, vertically, or diagonally), or if the board is completely filled without a winner (a tie).

## How to Play

1. The board is represented by a 3x3 grid.
2. Each player takes turns entering the row and column indices (0-2) where they want to place their mark.
3. The first player is assigned 'X', and the second player is assigned 'O'.
4. The game continues until one of the players wins or there is a tie.
5. If a player enters an invalid move, they will be prompted to try again.

## Getting Started

To run the game, follow these steps:

1. Make sure you have a C++ compiler installed on your machine.
2. Clone this repository or download the source code files.
3. Compile the code using the C++ compiler.
4. Run the executable generated after compilation.
5. Play the game by following the instructions displayed in the console.

## Example Gameplay
```
Player X's turn.
 | | 
-----
 | | 
-----
 | | 

Enter row and column (0-2): 1 1

Player O's turn.
 | | 
-----
 |X| 
-----
 | | 

Enter row and column (0-2): 0 0

Player X's turn.
O| | 
-----
 |X| 
-----
 | | 

Enter row and column (0-2): 2 0

Player O's turn.
O| | 
-----
 |X| 
-----
X| | 

Enter row and column (0-2): 1 0

Player X's turn.
O| | 
-----
O|X| 
-----
X| | 

Enter row and column (0-2): 1 2

Player O's turn.
O| |X
-----
O|X| 
-----
X| | 

Enter row and column (0-2): 0 2

Player X's turn.
O| |X
-----
O|X| 
-----
X| |O

Enter row and column (0-2): 2 2

Player X wins!
