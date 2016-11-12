#include <iostream>
#include <string>
#include <algorithm>
#include <set> 


using namespace std; 
int main() {
	cout << "How many destinations would you like to add to your BucketList?" << endl;
	int destinationNum;
	cin >> destinationNum;


	set<string> Locations;

	for (int i = 0; i < destinationNum; i++) {
		cout << "Where is your BucketList Destination?" << endl;
		string Destination;
		cin >> Destination; 
		//transform(Destination.begin(), Destination.end(), Destination.begin(), toupper);
		Locations.insert(Destination);

		cout << "What time of the year would you like to take this trip?" << endl;
		cout << "Please respond with one of the following: SPRING, SUMMER, FALL, or WINTER." << endl;
		bool spring = false;
		bool summer = false;
		bool fall = false;
		bool winter = false;

		string season;
		cin >> season;
		if (season == "SPRING") spring = true;
		if (season == "SUMMER") summer = true;
		if (season == "FALL") fall = true;
		if (season == "WINTER") winter = true; 

		cout << "How long would you like to be on this trip for?" << endl;
		cout << "Please respond with one of the follwing: SHORT, MEDIUM, or LONG." << endl;
		bool Short = false;
		bool Medium = false;
		bool Long = false;

		string duration;
		cin >> duration;
		if (duration == "SHORT") Short = true;
		if (duration == "MEDIUM") Medium = true;
		if (duration == "LONG") Long = true;
	}

	cout << "Thanks for your input, generating schedules now!" << endl;
		int counter = 1;
		for (set<string>::iterator it = Locations.begin(); it != Locations.end(); it++) {
			cout << "Destination " << counter << ": " << *it << endl;
			counter ++; 

		}
}