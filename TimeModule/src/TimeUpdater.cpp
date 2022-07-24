#include "TimeUpdater.hpp"

void TimeUpdater::update() {
    time_repo->PassOneTick();
    
    // Check some game event is ocurrence.
}

void TimeUpdater::update(float delta_time) {
    time_update_interval.TimeGo(delta_time);
    int time_update_number = time_update_interval.GetPassNumberAndReset();
    while (time_update_number > 0) {
        time_repo->PassOneTick();
        
        // Check some game event is ocurrence.

        time_update_number--;
    }
}
