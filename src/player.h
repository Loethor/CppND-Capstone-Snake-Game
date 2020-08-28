#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>
#include "snake.h"

using std::string;

class Player{
public:
    Player() { std::cout << "Creating new player... " << std::endl; };
    Player(string, int);
    ~Player(){};

    // getters
    string GetName();
    int GetScore();

    // setters
    void SetName();
    void SetScore(int score);

private:
    string name;
    int score;
};

#endif
