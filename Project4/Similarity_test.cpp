#include "gmock/gmock.h"
#include "length.cpp"

using namespace testing;

TEST(LengthTest, LengthTC1) {
	EXPECT_EQ(1, 1);
}

TEST(AlphaTest, AlphaTC1) {
	EXPECT_EQ(1, 1);
}

int main() {
	testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}