#include "player.h"
#include <iostream>
#include <string>
#include<ctime>
#include<vector>

using std::string;
using std::vector;

Player::Player(string name, int score){
    std::cout<<"Creating new player... "<< std::endl;
    this->name = name;
    this->score = score;
}

string Player::GetName(){
    // Obtains the name
    return name;
}

int Player::GetScore(){
    // Obtains the score
    return score;
}

void Player::SetName(){
    // the name can be set as a string
    string name;
    std::cout<<"Your player name is:  ";
    std::cin >> name;
    this->name = name;
}

void Player::SetScore(int score){
    // the score can be set as an int
    this->score = score;
}





