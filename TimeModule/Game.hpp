#include <thread>
#include "TimeRepository.hpp"
#include "TimeUpdater.hpp"

class Game {
public:
    TimeRepository time_repo;
    TimeUpdater time_updater;
    
    Game()
    : time_repo(TimeRepository()), time_updater(TimeUpdater(&time_repo)) {};
    
    void update();
};
