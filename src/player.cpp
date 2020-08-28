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
    return name;
}

int Player::GetScore(){
    return score;
}

void Player::SetName(){
    string name;
    std::cout<<"Your player name is:  ";
    std::cin >> name;
    this->name = name;
}

void Player::SetScore(){
    int score;
    std::cout<< "Your score is:  ";
    std::cin >> score;
    this->score = score;
}





