#include <iostream>
#include "controller.h"
#include "game.h"
#include "manager.h"
#include "renderer.h"
#include "player.h"

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  bool start = false;

  Manager manager;
  while(true){

    while(!start){
      
      if(manager.should_quit_game){
        //exits program
        return 0;
      }

      start = manager.Init();
    }
    start = false;

    Player *p1 = new Player();

    Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
    Controller controller;
    Game game(kGridWidth, kGridHeight);
    game.Run(controller, renderer, kMsPerFrame);

    p1->SetName();

    std::cout <<  "\n";
    std::cout << "Game has terminated successfully!\n";
    std::cout << "Score: " << game.GetScore() << "\n";
    std::cout << "Size: " << game.GetSize() << "\n";
    std::cout << "" << "\n";
    p1->SetScore(game.GetScore());

    std::cout << "Your score has been saved."<< "\n";
    manager.SaveHighScores(p1->GetName(), p1->GetScore());

    std::cout <<  "\n";
    std::cout << "Wanna play again?"<< "\n";

    delete p1;

  }


  return 0;
}