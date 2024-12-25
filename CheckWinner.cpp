#include<iostream>
#include "CheckWinner.h"
using namespace std;
bool checkWinner(char *spaces, char player, char computer){
    if ((spaces[0]!=' ')&&(spaces[0]==spaces[1])&&(spaces[1]==spaces[2])){
        spaces[0] == player ? cout<<"You win!"<<endl : cout<<"You lose !"<<endl;
    }else if ((spaces[3]!=' ')&&(spaces[3]==spaces[4])&&(spaces[4]==spaces[5])){
        spaces[3] == player ? cout<<"You win!"<<endl : cout<<"You lose !"<<endl;
    }else if ((spaces[6]!=' ')&&(spaces[6]==spaces[7])&&(spaces[7]==spaces[8])){
        spaces[6] == player ? cout<<"You win!"<<endl : cout<<"You lose !"<<endl;
    }else if ((spaces[0]!=' ')&&(spaces[0]==spaces[3])&&(spaces[3]==spaces[6])){
        spaces[0] == player ? cout<<"You win!"<<endl : cout<<"You lose !"<<endl;
    }else if ((spaces[1]!=' ')&&(spaces[1]==spaces[4])&&(spaces[4]==spaces[7])){
        spaces[1] == player ? cout<<"You win!"<<endl : cout<<"You lose !"<<endl;
    }else if ((spaces[2]!=' ')&&(spaces[2]==spaces[5])&&(spaces[5]==spaces[8])){
        spaces[2] == player ? cout<<"You win!"<<endl : cout<<"You lose !"<<endl;
    }else if ((spaces[0]!=' ')&&(spaces[0]==spaces[4])&&(spaces[4]==spaces[8])){
        spaces[0] == player ? cout<<"You win!"<<endl : cout<<"You lose !"<<endl;
    }else if ((spaces[2]!=' ')&&(spaces[2]==spaces[4])&&(spaces[4]==spaces[6])){
        spaces[2] == player ? cout<<"You win!"<<endl : cout<<"You lose !"<<endl;
    }else{
        return false;
    }
    return true;
    
}
bool checkTie(char *spaces){
    for (int i = 0; i < 9; i++){
        if (spaces[i]==' '){
            return false;
        }
    }
    cout<<"Tie!"<<endl;
    return true;
}