#include "Day.h"

using namespace std;

Day::Day(){
	_Occupied = false;
	_yr = "2017";
}

Day::Day(bool occupied){
	_Occupied = occupied;
	_yr = "2017";
}

bool Day::Occupied(){
	return _Occupied;
}

void Day::setOccupied(){
	_Occupied = true;
}

void Day::setFree(){
	_Occupied = false;
}

void Day::setMonth(string month){
	_month = month;
}

void Day::setDay(string day){
	_day = day;
}

string Day::getDate(){
	string date = "";
	date += _yr+"-"+_month+"-"+_day;
	return date;
}
