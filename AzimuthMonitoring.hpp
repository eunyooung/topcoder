#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
 
class AzimuthMonitoring
{
	public:
		int getAzimuth(vector <string> instructions){
			int degree = 0;
			for(int i = 0; i < instructions.size(); i++){
				string input = instructions[i];
				if(input == "HALT")
					break;
				else if(input == "LEFT")
					degree -= 90;
				else if(input == "RIGHT")
					degree += 90;
				else if(input == "TURN AROUND")
					degree += 180;
				else{
					stringstream temp(input);
					string direction;
					int angle;
					temp >> direction >> angle;
					if(direction == "LEFT"){
						angle *= -1;
					}
					degree += angle;
				}
			}
			degree = ((degree % 360) + 360) % 360;
			return degree;
		}
};
