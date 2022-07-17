#include "GameTime.hpp"

void GameTime::PassOneTick(){
	game_time.PassOneMinute();
	NewDayCheckAndPassDay();
}

void GameTime::NewDayCheckAndPassDay() {
	if (game_time.IsDayOver()) {
		game_date.PassOneDay();
	}
}