#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Length {
public:
	double calLengthScore(string s1, string s2) {
		int lenA = max(s1.size(), s2.size());
		int lenB = min(s1.size(), s2.size());

		double score = 0.0;

		if (lenA < 2 * lenB) {
			score = (1.0 - (double)(lenA - lenB) / lenB) * 60.0;
		}
		return score;
	}
};
