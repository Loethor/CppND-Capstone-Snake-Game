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
    void SetScore();

private:
    string name;
    int score;
};
