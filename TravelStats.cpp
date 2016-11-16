#include "TravelStats.h"
#include <iostream>
#include <sstream>
#include <string> 
#include <curlpp/cURLpp.hpp>
#include <curlpp/Options.hpp>


TravelStats::TravelStats(std::string DD, std::string RD, std::string D, std::string O) {
		departureDate = DD;
		returnDate = RD;
		destination = D;
		origin = O; 
	}

TravelStats::~TravelStats() {

}

void TravelStats::flightPrice() {
curlpp::Cleanup myCleanup;

std::ostringstream os;
std::string pass = "";
pass += "http://api.sandbox.amadeus.com/v1.2/flights/low-fare-search?origin=";
pass += origin;
pass += "&destination=";
pass += destination;
pass += "&departure_date=";
pass += departureDate;
pass += "&return_date=";
pass += returnDate;
pass += "API KEY";

os << curlpp::options::Url(std::string(pass));

std::string returned = os.str();

std::cout << returned << std::endl;

}

void TravelStats::hotelPrice(std::string departureDate, std::string returnDate, std::string destination) {

}

void TravelStats::carPrice(std::string departureDate, std::string returnDate, std::string destination) {

}

/* int TravelStats::priceTrip() {

} */ 
