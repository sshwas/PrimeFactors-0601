#include "pch.h"
#include <vector>
#include "../PrimeFactor/PrimeFactors.cpp"

using namespace std;

TEST(TestCaseName, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};

	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(TestCaseName, Of2) {
	PrimeFactor prime_factor;
	vector<int> expected = {2};

	EXPECT_EQ(expected, prime_factor.of(2));
}