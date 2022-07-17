#include "Tester.hpp"

Tester::Tester() {
    game = Game();
}
Tester::~Tester() {}

void Tester::gameLoop() {
    while(true) {
        game.update();
    }
};

int Tester::getTime() {
    return game.time_repo.GetOverallTime();
}
