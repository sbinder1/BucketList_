#include <iostream>
#include <string>
#include <algorithm>
#include <set> 
#include "TravelStats.h"


using namespace std;

int main() {
	std::cout << "How many destinations would you like to add to your BucketList?" << std::endl;
	int destinationNum;
	std::cin >> destinationNum;


	std::set<std::string> Locations;

	for (int i = 0; i < destinationNum; i++) {
		std::cout << "Where is your BucketList Destination?" << std::endl;
		std::string Destination;
		std::cin >> Destination; 
		//transform(Destination.begin(), Destination.end(), Destination.begin(), toupper);
		Locations.insert(Destination);

		std::cout << "What time of the year would you like to take this trip?" << std::endl;
		std::cout << "Please respond with one of the following: SPRING, SUMMER, FALL, or WINTER." << std::endl;
		int seasonNum;
		/*
		bool spring = false;
		bool summer = false;
		bool fall = false;
		bool winter = false;*/

		std::string season;
		std::cin >> season;

		if (season == "SPRING") seasonNum = 1;
		if (season == "SUMMER") seasonNum = 2;
		if (season == "FALL") seasonNum = 3;
		if (season == "WINTER") seasonNum = 4; 

		std::cout << "How long would you like to be on this trip for?" << std::endl;
		std::cout << "Please respond with one of the follwing: SHORT, MEDIUM, or LONG." << std::endl;
		bool Short = false;
		bool Medium = false;
		bool Long = false;

		std::string duration;
		std::cin >> duration;
		if (duration == "SHORT") Short = true;
		if (duration == "MEDIUM") Medium = true;
		if (duration == "LONG") Long = true;
	}

	std::cout << "Thanks for your input, generating schedules now!" << std::endl;
		int counter = 1;
		for (set<string>::reverse_iterator it = Locations.rbegin(); it != Locations.rend(); it++) {
			std::cout << "Destination " << counter << ": " << *it << std::endl;
			counter ++; 

		}
std::string DD = "2016-12-02";
std::string RD = "2016-12-07"; 
std::string D = "LON"; 
std::string O = "DEN";
TravelStats t (DD,RD,D,O);
t.flightPrice();

}
