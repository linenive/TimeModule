#include <string>
#include <iostream>
#import "GameEngine.hpp"
#import "Game.hpp"

class Tester {
private:
    GameEngine game_engine;
    Game game;
    
public:
    Tester(): game(Game()), game_engine(GameEngine(&game)) {};
    ~Tester();
    void gameLoop();
    int getTime();
};
