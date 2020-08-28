#include <iostream>
#include "player.h"
#include <vector>
#include <fstream>

using std::vector;

class Manager{

public:
    Manager()
    {
        std::cout << " " << std::endl;
    };

    bool Init();
    static bool should_quit_game;
    void ShowHighScores();
    void SaveHighScores(string name, int score);

private:
    Player *player;
};