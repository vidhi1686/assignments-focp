//TIC TAC TOE GAME
#include <stdio.h>
char board[3][3], player = 'X';  
void Board() {
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) {
            board[i][j] = '0';  
        }
    }
}
void printBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);  
            if (j < 2) {
                printf("|");  
            }
        }
        printf("\n");
        if (i < 2) {
            printf("---|---|---\n");
        }
    }
    printf("\n");
}
int checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1;  
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return 1;  
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return 1;  
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return 1;  
    }
    return 0; 
}
int checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == '0') {  
                return 0;
            }
        }
    }
    return 1; 
}
void switchPlayer() {
    player = (player == 'X') ? 'O' : 'X'; 
}
void makeMove() {
    int row, column;
    while (1) {
        printf("Player %c, enter your move (row and column): ", player);
        scanf("%d %d", &row, &column);
        if (row >= 1 && row <= 3 && column >= 1 && column <= 3 && board[row - 1][column - 1] == '0') {
            board[row - 1][column - 1] = player;
            break;  
        } else {
            printf("Invalid move! Please try again.\n");
        }
    }
}
int main() {
    Board();  
    while (1) {
        printBoard(); 
        makeMove(); 
        if (checkWin()) {
            printBoard();  
            printf("Player %c wins!\n", player);
            break;
        }
        else if (checkDraw()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }    
        switchPlayer(); 
    }
    return 0;
}