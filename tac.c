/*
Need what?
->> player,winner,loser,computer
->> board,turns(do while)
->> 
*/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>
// prints the main 3x3 board
// affected by ResetBoard() , CheckFreeSpaces() ,  UserInput(), ComInput();
int Board(int){
    int board[3][3];
    printf("  %c |  %c | %c ",board[0][0],board[0][1],board[0][2]);
    printf("\n ---|----|---|\n");
    printf("  %c | %c  | %c ",board[1][0],board[1][1],board[1][2]);
    printf("\n ---|----|---|\n");
    printf("  %c | %c  | %c  ",board[2][0],board[2][1],board[2][2]);
    printf("\n");
}
// affected by checkFreeSpaces() , GameCondition
void ResetBoard(int board[3][3]){
    int wboard[3][3];
    for(size_t i=0; i<3; i++){
        for(size_t j=0; j<3; j++){
         board[i][j] = ' ';
        }
    }
}
// affected by GameCondition
int StartGame(bool(*GameCondition)(int));
//affected by ResetBoard() , Board();
int checkFreeSpaces();
int UserInput(int *const PlayerRow,int *const PlayerColumn){
    int board(wboard);
    int *wboard[3][3] = &board[3][3];
    const char PLAYER = 'X';
    int wRow,wColumn;
    
    do{
    printf("Please enter a row: ");
    scanf("%d",&wRow);
    wRow--;
    printf("Please enter a  column ");
    scanf("%d",&wColumn);
    wColumn--;

    if(wboard[wRow][wColumn] != ' '){
        puts("error");
    }
    else{
        wboard[wRow][wColumn] = PLAYER;
    }

    }while(wboard[wRow][wColumn]);
}
int ComInput(int const *ComRow,int const *ComColumn);
int main(){

    // 0 == win , 1 == Lose , 2 == Draw ;
    int GameStatus = 1;

    if(GameStatus == 0){
        puts("You win!");
        return 0;
    }

    else{
        if(GameStatus == 1){
          
           Board(int);
           
        }
    }

   
}