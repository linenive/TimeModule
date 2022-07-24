#include "TimeRepository.hpp"

unsigned int TimeRepository::GetOverallTime() {
    return current_game_time.GetYear().val * MONTH_PER_YEAR * DAYS_PER_MONTH * HOUR_PER_DAY * MINUTE_PER_HOUR
        + current_game_time.GetMonth().val * DAYS_PER_MONTH * HOUR_PER_DAY * MINUTE_PER_HOUR
        + current_game_time.GetDay().val * HOUR_PER_DAY * MINUTE_PER_HOUR
        + current_game_time.GetHour().val * MINUTE_PER_HOUR
        + current_game_time.GetMinute().val;
}
