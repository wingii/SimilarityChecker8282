#include <iostream>
#include <string>
#include <algorithm>
#include <stdexcept>

using namespace std;

class Length {
public:
	double calLengthScore(string s1, string s2) {

		int MaxLength = max(s1.size(), s2.size());
		int MinLength = min(s1.size(), s2.size());

		double score = 0.0;

		if (MaxLength < 2 * MinLength) {
			score = (1.0 - (double)(MaxLength - MinLength) / MinLength) * 60.0;
		}
		return score;
	}
};
