/**
 * Amadeus Travel Innovation Sandbox
 * No descripton provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 1.2
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "SWGFlightSearchSegment.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGFlightSearchSegment::SWGFlightSearchSegment(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFlightSearchSegment::SWGFlightSearchSegment() {
    init();
}

SWGFlightSearchSegment::~SWGFlightSearchSegment() {
    this->cleanup();
}

void
SWGFlightSearchSegment::init() {
    departs_at = new QString("");
arrives_at = new QString("");
origin = new SWGAirport();
destination = new SWGAirport();
marketing_airline = new QString("");
operating_airline = new QString("");
flight_number = new QString("");
aircraft = new QString("");
booking_info = new SWGFlightSearchBookingInfo();
}

void
SWGFlightSearchSegment::cleanup() {
    if(departs_at != NULL) {
        delete departs_at;
    }
if(arrives_at != NULL) {
        delete arrives_at;
    }
if(origin != NULL) {
        delete origin;
    }
if(destination != NULL) {
        delete destination;
    }
if(marketing_airline != NULL) {
        delete marketing_airline;
    }
if(operating_airline != NULL) {
        delete operating_airline;
    }
if(flight_number != NULL) {
        delete flight_number;
    }
if(aircraft != NULL) {
        delete aircraft;
    }
if(booking_info != NULL) {
        delete booking_info;
    }
}

SWGFlightSearchSegment*
SWGFlightSearchSegment::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFlightSearchSegment::fromJsonObject(QJsonObject &pJson) {
    setValue(&departs_at, pJson["departs_at"], "QString", "QString");
setValue(&arrives_at, pJson["arrives_at"], "QString", "QString");
setValue(&origin, pJson["origin"], "SWGAirport", "SWGAirport");
setValue(&destination, pJson["destination"], "SWGAirport", "SWGAirport");
setValue(&marketing_airline, pJson["marketing_airline"], "QString", "QString");
setValue(&operating_airline, pJson["operating_airline"], "QString", "QString");
setValue(&flight_number, pJson["flight_number"], "QString", "QString");
setValue(&aircraft, pJson["aircraft"], "QString", "QString");
setValue(&booking_info, pJson["booking_info"], "SWGFlightSearchBookingInfo", "SWGFlightSearchBookingInfo");
}

QString
SWGFlightSearchSegment::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGFlightSearchSegment::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("departs_at"), departs_at, obj, QString("QString"));
    
        

    
    toJsonValue(QString("arrives_at"), arrives_at, obj, QString("QString"));
    
        

    
    toJsonValue(QString("origin"), origin, obj, QString("SWGAirport"));
    
        

    
    toJsonValue(QString("destination"), destination, obj, QString("SWGAirport"));
    
        

    
    toJsonValue(QString("marketing_airline"), marketing_airline, obj, QString("QString"));
    
        

    
    toJsonValue(QString("operating_airline"), operating_airline, obj, QString("QString"));
    
        

    
    toJsonValue(QString("flight_number"), flight_number, obj, QString("QString"));
    
        

    
    toJsonValue(QString("aircraft"), aircraft, obj, QString("QString"));
    
        

    
    toJsonValue(QString("booking_info"), booking_info, obj, QString("SWGFlightSearchBookingInfo"));
    
        

    return obj;
}

QString*
SWGFlightSearchSegment::getDepartsAt() {
    return departs_at;
}
void
SWGFlightSearchSegment::setDepartsAt(QString* departs_at) {
    this->departs_at = departs_at;
}

QString*
SWGFlightSearchSegment::getArrivesAt() {
    return arrives_at;
}
void
SWGFlightSearchSegment::setArrivesAt(QString* arrives_at) {
    this->arrives_at = arrives_at;
}

SWGAirport*
SWGFlightSearchSegment::getOrigin() {
    return origin;
}
void
SWGFlightSearchSegment::setOrigin(SWGAirport* origin) {
    this->origin = origin;
}

SWGAirport*
SWGFlightSearchSegment::getDestination() {
    return destination;
}
void
SWGFlightSearchSegment::setDestination(SWGAirport* destination) {
    this->destination = destination;
}

QString*
SWGFlightSearchSegment::getMarketingAirline() {
    return marketing_airline;
}
void
SWGFlightSearchSegment::setMarketingAirline(QString* marketing_airline) {
    this->marketing_airline = marketing_airline;
}

QString*
SWGFlightSearchSegment::getOperatingAirline() {
    return operating_airline;
}
void
SWGFlightSearchSegment::setOperatingAirline(QString* operating_airline) {
    this->operating_airline = operating_airline;
}

QString*
SWGFlightSearchSegment::getFlightNumber() {
    return flight_number;
}
void
SWGFlightSearchSegment::setFlightNumber(QString* flight_number) {
    this->flight_number = flight_number;
}

QString*
SWGFlightSearchSegment::getAircraft() {
    return aircraft;
}
void
SWGFlightSearchSegment::setAircraft(QString* aircraft) {
    this->aircraft = aircraft;
}

SWGFlightSearchBookingInfo*
SWGFlightSearchSegment::getBookingInfo() {
    return booking_info;
}
void
SWGFlightSearchSegment::setBookingInfo(SWGFlightSearchBookingInfo* booking_info) {
    this->booking_info = booking_info;
}



} /* namespace Swagger */

