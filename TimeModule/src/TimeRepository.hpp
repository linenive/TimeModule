#pragma once
#include "Domain/GameTime.hpp"
#include "Timer.hpp"

class TimeRepository {
private:
    GameTime current_game_time;

public:
    TimeRepository() : current_game_time(GameTime()){};
    ~TimeRepository(){};
    void CheckEvent();
    void LoadTime(const Year& year, const Month& month,
        const Day& day, const Time& time, const Minute& minute);
    GameTime GetGameTime() { return current_game_time; }
    GameTime CaptureGameTime() {
        return GameTime(
            Date(Year(current_game_time.GetYear().val), Month(current_game_time.GetMonth().val), Day(current_game_time.GetDay().val)),
            Time(Hour(current_game_time.GetHour().val), Minute(current_game_time.GetMinute().val))
        );
    }
    void PassOneTick() {
        current_game_time.PassOneTick();
    }
    unsigned int GetOverallTime();
};
