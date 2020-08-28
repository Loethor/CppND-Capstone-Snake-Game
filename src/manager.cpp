#include "manager.h"
#include <iostream>
#include <vector>
#include <fstream>
// #include <dirent.h>
// #include <unistd.h>
// #include <sstream>
// #include <algorithm>
// #include <bits/stdc++.h>
// #include <functional>
// #include <set>

bool Manager::should_quit_game = false;

bool Manager::Init()
{

    std::cout << " SNAKE game is starting!" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Choose an option: ";
    std::cout << " 1.- New Game" << std::endl;
    std::cout << " 2.- High Scores" << std::endl;
    std::cout << " 3.- Quit" << std::endl;


    int option;

    while (!(std::cin >> option))
    {
        std::cin.clear();
        
        // this must stop when enter is pressed
        while (std::cin.get() != '\n')
            continue;
        // protection against non-numbers
        std::cout << "Please choose a number.";
    }
    // if a number is chosen but it is not in the list
    if ((option < 1) || (option > 3))
    {
        std::cout << "System coudn't start. Wrong option was chosen." << std::endl;
        return false;
    }

    switch (option)
    {
        // game starts
        case 1:
        {
            return true;
        };
        break;

        //shows high score
        case 2:
        {
            //show highscores
            ShowHighScores();
            return false;
        };
        break;

        // game quits
        case 3:
        {
            std::cout << "Closing the game..." << std::endl;
            should_quit_game = true;
            return false;
        };

        }
}

void Manager::ShowHighScores(){
    string line;
    ifstream myfile ("../data/highscore.txt");
    if (myfile.is_open()){
        while (getline(myfile, line)){
            cout << line << '\n';
        }
        myfile.close();
    }
    else cout << "Unable to open file"; 

}

void SaveHighScores(string name, int score){
    ofstream myfile;
    myfile.open ("../data/highscore.txt", std::ios_base::app);
    myfile << name << "\t" << score << "\n";
    myfile.close();
}



