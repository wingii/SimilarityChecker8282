#include "gmock/gmock.h"
#include "length.cpp"
#include "alpha.cpp"

using namespace testing;

TEST(LengthTest, SameCase) {
	Length length;

	double  result = length.calLengthScore("abc", "abv");
	EXPECT_EQ(60, result);
}

TEST(LengthTest, 1DiffCase) {
	Length length;

	double  result = length.calLengthScore("ab", "abv");
	EXPECT_EQ(30, result);
}

TEST(LengthTest, 2xDiffCase) {
	Length length;

	double  result = length.calLengthScore("ab", "abvv");
	EXPECT_EQ(0, result);
}

TEST(LengthTest, 2xOverDiffCase) {
	Length length;

	double  result = length.calLengthScore("ab", "abvvdfsd");
	EXPECT_EQ(0, result);
}

TEST(AlphaTest, AlphaTC1) {
	EXPECT_EQ(1, 1);
}

int main() {
	testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}