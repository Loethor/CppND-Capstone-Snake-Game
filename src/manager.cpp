#include "manager.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>



using std::string;

bool Manager::Init()
{

    std::cout << " Welcome to SNAKE game" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Choose an option: "<< std::endl;
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
            std::cout << "Starting the game!" << std::endl;

            return true;
        };
        break;

        //shows high score
        case 2:
        {
            std::cout << "These are the current highscores:" << std::endl;
            std::cout << "" << std::endl;
            //show highscores
            ShowHighScores();
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
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
    std::ifstream myfile ("../data/highscore.txt");
    if (myfile.is_open()){
        while (getline(myfile, line)){
            std::cout << line << '\n';
        }
        myfile.close();
    }
    else std::cout << "Unable to open file"; 

}

void Manager::SaveHighScores(string name, int score){
    std::ofstream myfile;
    myfile.open ("../data/highscore.txt", std::ios_base::app);
    myfile << name << "\t" << score << "\n";
    myfile.close();
}



