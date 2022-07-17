#include <string>
#include <iostream>
#include "Game.hpp"

class Tester {
private:
    Game game;
    int time = 1000;
    
public:
    Tester();
    ~Tester();
    void gameLoop();
    int getTime();
};
