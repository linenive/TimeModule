#include "GameEngine.hpp"

void GameEngine::update() {
    your_game->update();
}

void GameEngine::gameLoop() {
    bool running = true;
    while (running) {
        passFramesAndUpdate();
        // rendering function will be here
    }
}

void GameEngine::passFramesAndUpdate() {
    skipped_frame_count = 0;
    while ( isTimePassed() && canPassFrame() ) {
        update();
        next_frame_ms += msecs_per_frame;
        skipped_frame_count++;
    }
}

milliseconds GameEngine::fetchCurrentMS() {
    return duration_cast<milliseconds>(system_clock::now().time_since_epoch());
}

bool GameEngine::isTimePassed() {
    return fetchCurrentMS() > next_frame_ms;
}

bool GameEngine::canPassFrame() {
    return skipped_frame_count < max_frame_skip;
}
