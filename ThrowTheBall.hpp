#include <iostream>
#include <vector>
using namespace std;

class ThrowTheBall
{
	public:
		int timesThrown(int N, int M, int L){
			// count vector
			vector<int> count(N);
			int current = 0;
			int throws = 0;
			// Initial increment
			count.at(current)++;

			while(count.at(current) < M) {
				if(count.at(current) % 2 == 0){
					// Thorw left side
					current = (current + L) % N;
				}
				else{
					// Throw right side
					current = ((current - L) % N + N) % N;
				}
				count.at(current)++;
				throws++;
			}
			return throws;
		}
};