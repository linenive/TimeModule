#include "TimeUpdater.hpp"

void TimeUpdater::update(float delta) {
    time_update_interval.TimeGo(delta);
    int time_update_number = time_update_interval.GetPassNumberAndReset();
    while (time_update_number > 0) {
        time_repo->PassOneTick();
        
        // Check some game event is ocurrence.

        time_update_number--;
    }
}