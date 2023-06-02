#include<iostream>
#include<string>
using namespace std;

const int BOARD_SIZE = 3;

// Function to initialize the game board with empty spaces
void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]){
    for(int i=0; i<BOARD_SIZE; i++){
        for(int j=0; j<BOARD_SIZE; j++){
            board[i][j] = ' ';
        }
    }
}

// Function to print the game board
void printBoard(const char board[BOARD_SIZE][BOARD_SIZE]){
    for(int i=0; i<BOARD_SIZE; i++){
        for(int j=0; j<BOARD_SIZE; j++){
            cout << board[i][j];
            if(j < BOARD_SIZE - 1)
                cout << '|';
        }
        cout << endl;
        if(i < BOARD_SIZE - 1){
            cout << "-----" << endl;
        }
    }
}

// Function to check if a move is valid
bool isMoveValid(int row, int col, const char board[BOARD_SIZE][BOARD_SIZE]){
    if(row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE)
        return false;
    if(board[row][col] != ' ')
        return false;
    return true;
}

// Function to check if the board is full
bool isBoardFull(const char board[BOARD_SIZE][BOARD_SIZE]){
    for(int i=0; i<BOARD_SIZE; i++){
        for(int j=0; j<BOARD_SIZE; j++){
            if(board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

// Function to check if a player has won
bool hasPlayerWon(char player, const char board[BOARD_SIZE][BOARD_SIZE]){
    // Check rows
    for(int i=0; i<BOARD_SIZE; i++){
        if(board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
    }

    // Check columns
    for(int j=0; j<BOARD_SIZE; j++){
        if(board[0][j] == player && board[1][j] == player && board[2][j] == player)
            return true;
    }

    // Check diagonals
    if(board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;

    if(board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

void playTicTacToe(){
    char board[BOARD_SIZE][BOARD_SIZE];
    char currentPlayer = 'X';
    int row, col;

    initializeBoard(board);

    while(true){
        cout << "Player " << currentPlayer << "'s turn." << endl;
        printBoard(board);

        cout << "Enter row and column (0-" << BOARD_SIZE-1 << "): ";
        cin >> row >> col;

        if(!isMoveValid(row, col, board)){
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        board[row][col] = currentPlayer;

        if(hasPlayerWon(currentPlayer, board)){
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        if(isBoardFull(board)){
            cout << "It's a tie!" << endl;
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}

int main(){
    playTicTacToe();
    return 0;
}
