#include "Game.hpp"

void Game::update() {
    time_updater.update();
}

void Game::update(float delta_time) {
    time_updater.update(delta_time);
}
