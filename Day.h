#ifndef Day_H
#define Day_H

#include <string>

class Day{
public:
	Day();
	Day(bool);
	bool Occupied();
	void setOccupied();
	void setFree();
	void setMonth(std::string);
	void setDay(std::string);
	std::string getDate();
private:
	bool _Occupied;
	std::string _month;
	std::string _day; 
	std::string _yr;
};
#endif