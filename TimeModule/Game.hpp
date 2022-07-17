#include "TimeRepository.hpp"
#include "TimeUpdater.hpp"

class Game {
private:
    TimeRepository time_repo;
    TimeUpdater time_updater;

public:
    Game()
    : time_repo(TimeRepository()), time_updater(TimeUpdater(&time_repo)) { };

};