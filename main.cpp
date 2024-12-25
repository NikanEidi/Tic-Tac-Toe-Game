#include<iostream>
#include <ctime> // to generate random number 
#include "Board.h"
#include "CheckWinner.h"
#include "Players.h"
using namespace std;
int main(){
    // array called spaces which contains 9 elements which they are empty
    char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool run = true;
    createBoard(spaces);
     while (run){
            playerMove(spaces, player);  
            createBoard(spaces);
            if (checkWinner(spaces, player, computer)){
                run=false;
                break;
            }else if (checkTie(spaces)){
                run = false;
                break;
            }
            
            
            computerMove(spaces, computer);
            createBoard(spaces);
             if (checkWinner(spaces, player, computer)){
                run=false;
                break;
            }else if (checkTie(spaces)){
                run = false;
                break;
            }
                   
        }

    return 0;
}