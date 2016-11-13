#ifndef Calendar_H
#define Calendar_H

#include "Day.h"
#include <string>
#include <vector>
class Calendar{
public:
	Calendar(); //initializes all days to be free
	//ideally takes as input calendar such as from Google to block of timings
	//In this case, simply states if a date is booked or not
	Calendar(bool[52][7]);

	//Takes as input Origin, Destination, Season, and duration (in weeks) 
	void possibleDates(std::vector<std::string>, std::string, std::vector<int>, std::vector<int>);
	void possibleDatesHelper(std::vector<std::string>, std::string, std::vector<int>, std::vector<int>, unsigned int indx);
	void bookThis(int, int, int);
	void unbookThis(int, int, int);
	void randomSetUp();
	void setDates();

private:
	Day _year[53][7]; //The calendar of days
	//Day _year[366]; //The calendar of days


};
#endif