#pragma once
#include <string>
#include <iostream>
#include "TimeRepository.hpp"
#import "Timer.hpp"

class TimeUpdater {
private:
    TimeRepository* time_repo;
    Timer time_update_interval;
    
public:
    TimeUpdater(TimeRepository* _time_repo)
    : time_repo(_time_repo), time_update_interval(Timer(UPDATE_INTERVAL_TIME)){};
    ~TimeUpdater(){};
    
    void update();
    void update(float delta);
};
