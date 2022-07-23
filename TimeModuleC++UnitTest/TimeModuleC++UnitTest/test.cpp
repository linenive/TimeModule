#include "pch.h"
#include "../../TimeModule/Game.hpp"

TEST(GameTimeSuite, InitTest) {
	GameTime time = GameTime();

	EXPECT_EQ(DEFAULT_START_YEAR, time.GetYear().val);
}