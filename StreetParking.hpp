#include <iostream>
using namespace std;

class StreetParking
{
	public:
		int freeParks(string street){
			// Counter
			int parks = 0;
			for(int i = 0; i < street.length(); i++){
				if(street[i] != '-')
					continue;
				// Not 5 meters before and after a  side-street
				else if(street[i+1] == 'S' || street[i-1] == 'S')
					continue;
				// Not 5 and 10 meters before a bus stop.
				else if(street[i+1] == 'B' || street[i+2] == 'B')
					continue;
				parks++; 
			}
	        return parks;
		}
};