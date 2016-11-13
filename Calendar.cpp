#include "Day.h"
#include "Calendar.h"
//#include "TravelStats.h"
#include <stdexcept>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

Calendar::Calendar(){
	setDates();
	//Make random ones busy
	randomSetUp();
	

} 

//ideally takes as input calendar such as from Google to block of timings
//In this case, simply states if a date is booked or not
Calendar::Calendar(bool busy[52][7]){
	for(int i=0; i<53; i++){
		for(int j=0; j<7; j++){
			if(busy[i][j]){
				_year[i][j].setOccupied();
			}
		}
	}
	setDates();
}

//Takes as input Origin, Destination, Season, and duration (in weeks) 
void Calendar::possibleDates(vector<string> dest, string orig, vector<int> season, vector<int> dur){
	possibleDatesHelper(dest, orig, season, dur, 0);
}

void Calendar::possibleDatesHelper(vector<string> dest, string orig, vector<int> season, vector<int> dur, unsigned int indx){
	int options = 13/dur[indx]; 
	cout<<dest[indx]<<" has "<<options<<" options."<<endl;
	int count = 0;
	while(count<options){
		try{
			cout<<dest[indx]<<": ";
			bookThis(season[indx],count,dur[indx]);
			//TravelStats();
			if(indx!=dest.size()-1){
				possibleDatesHelper(dest, orig, season, dur, indx+1);
			}
			unbookThis(season[indx],count,dur[indx]);
			count++;
		}
		catch(logic_error &o){
			cout<<"HERE"<<endl;
			count++;
		}
	}
}

void Calendar::bookThis(int season, int count, int dur){
	int start;
	//Determine the season
	if(season==2){
		start = 6;
	}
	else if(season==3){
		start = 19;
	}
	else if(season==4){
		start = 32;
	}

	//Check if all the dates are occupied
	int end=start+count;
	for(int i=end; i<end+dur; i++){
		for(int j=0; j<7; j++){
			if(_year[i][j].Occupied()){
				throw logic_error("Occupied");
			}
		}
	}

	//Otherwise occupy them
	cout<<"Start: "<<_year[end][0].getDate()<<" End: "<<_year[end+dur][0].getDate()<<endl;
	for(int i=end; i<end+dur; i++){
		for(int j=0; j<7; j++){
			_year[i][j].setOccupied();
		}
	}
}

void Calendar::unbookThis(int season, int count, int dur){
	int start;
	//Determine the season
	if(season==2){
		start = 6;
	}
	else if(season==3){
		start = 19;
	}
	else if(season==4){
		start = 32;
	}
	int end = start+count;
	//Free all the dates we occupied
	for(int i=end; i<end+dur; i++){
		for(int j=0; j<7; j++){
			_year[i][j].setFree();
		}
	}
}

void Calendar::setDates(){
	for(int i=1; i<32; i++){
		//Months with 31 days
		_year[(i/7)][(i%7)-1].setMonth("01");
		_year[(59+i)/7][((59+i)%7)-1].setMonth("03");
		_year[(120+i)/7][((120+i)%7)-1].setMonth("05");
		_year[(181+i)/7][((181+i)%7)-1].setMonth("07");
		_year[(212+i)/7][((212+i)%7)-1].setMonth("08");
		_year[(273+i)/7][((273+i)%7)-1].setMonth("10");
		_year[(334+i)/7][((334+i)%7)-1].setMonth("12");

		//Setting the day
		string day = "";
		if(i<10)
			day+="0";
		int temp = i;
		stringstream ss;
		ss<<day<<temp;
		day = ss.str();
		_year[i/7][(i%7)-1].setDay(day);
		_year[(59+i)/7][((59+i)%7)-1].setDay(day);
		_year[(120+i)/7][((120+i)%7)-1].setDay(day);
		_year[(181+i)/7][((181+i)%7)-1].setDay(day);
		_year[(212+i)/7][((212+i)%7)-1].setDay(day);
		_year[(273+i)/7][((273+i)%7)-1].setDay(day);
		_year[(334+i)/7][((334+i)%7)-1].setDay(day);
	}
	//February
	for(int i=1; i<29; i++){
		_year[(31+i)/7][((31+i)%7)-1].setMonth("02");
		//Setting the day
		string day = "";
		if(i<10)
			day+="0";
		int temp = i;
		stringstream ss;
		ss<<day<<temp;
		day = ss.str();
		_year[(31+i)/7][((31+i)%7)-1].setDay(day);
	}
	//Months with 30 Days
	for(int i=1; i<31; i++){
		_year[(89+i)/7][(89+i)%7].setMonth("04");
		_year[(150+i)/7][(150+i)%7].setMonth("06");
		_year[(242+i)/7][(242+i)%7].setMonth("09");
		_year[(303+i)/7][(303+i)%7].setMonth("11");

		//Setting the day
		string day = "";
		if(i<10)
			day+="0";
		int temp = i;
		stringstream ss;
		ss<<day<<temp;
		day = ss.str();
		_year[(89+i)/7][(89+i)%7].setDay(day);
		_year[(150+i)/7][(150+i)%7].setDay(day);
		_year[(242+i)/7][(242+i)%7].setDay(day);
		_year[(303+i)/7][(303+i)%7].setDay(day);
	}
}

void Calendar::randomSetUp(){
	_year[2][5].setOccupied();
	_year[6][3].setOccupied();
	_year[35][4].setOccupied();
	_year[23][1].setOccupied();
	_year[48][0].setOccupied();
	_year[17][5].setOccupied();
	_year[13][2].setOccupied();
	vector<string> dest;
	vector<int> season;
	vector<int> dur;
	dest.push_back("Florida");
	dest.push_back("Kansas");
	dest.push_back("Thailand");
	season.push_back(2);
	season.push_back(3);
	season.push_back(4);
	dur.push_back(1);
	dur.push_back(2);
	dur.push_back(3);
	string orig = "Home";

	possibleDates(dest, orig, season, dur);
}