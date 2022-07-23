#ifndef GameEngine_hpp
#define GameEngine_hpp

#include <iostream>
#include <chrono>
#include "Game.hpp"

using namespace std::chrono;
using std::cout; using std::endl;

class GameEngine {
private:
    Game* your_game;
    void update();
    
    const int max_frame_skip = 10;
    milliseconds ticks_per_seconds = milliseconds(50);
    milliseconds msecs_per_frame = milliseconds(1000/50);
    milliseconds next_frame_ms = fetchCurrentMS();
    int skipped_frame_count;
    void passFramesAndUpdate();
    milliseconds fetchCurrentMS();
    bool isTimePassed();
    bool canPassFrame();

public:
    GameEngine(Game* _your_game): your_game(_your_game) {};
    ~GameEngine() {};
    void gameLoop();
};

#endif
