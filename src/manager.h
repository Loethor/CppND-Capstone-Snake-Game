#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using std::vector;
using std::string;

class Manager{

public:
    Manager()
    {
        std::cout << "" << std::endl;
        should_quit_game = false;
    };
    ~Manager(){};

    bool Init();
    bool should_quit_game;
    void ShowHighScores();
    void SaveHighScores(string name, int score);

};

#endif