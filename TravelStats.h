#ifndef TRAVELSTATS_H_
#define TRAVELSTATS_H_
#include <string>
#include <iostream>
 

class TravelStats { //create TravelStats object everytime the info on a potential trip needs to be generated
public:
	TravelStats(std::string DD, std::string RD, std::string D, std::string O);
	~TravelStats();
	void flightPrice();
	void hotelPrice(std::string departureDate, std::string returnDate, std::string destination);
	void carPrice(std::string departureDate, std::string returnDate, std::string destination);
	//int priceTrip();

private: 
	std::string departureDate;
	std::string returnDate;
	std::string destination;
	std::string origin; 
	//int flight;
	//int hotel;
	//int car;
	//int total;

};
#endif
