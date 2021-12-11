#include <iostream>
using namespace std;

class EggCartons {
	public:
		int minCartons(int n) {
			int countMin = 0;

			for (; n >= 0 && n%8 != 0; n -= 6) countMin++;

			if (n < 0) return -1;
			
			countMin = countMin + (n/8);
			return countMin;
		}
};