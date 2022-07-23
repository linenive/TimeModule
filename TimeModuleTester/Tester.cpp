#include "Tester.hpp"

Tester::~Tester() {}

void Tester::gameLoop() {
    game_engine.gameLoop();
};

int Tester::getTime() {
    return game.time_repo.GetOverallTime();
}
