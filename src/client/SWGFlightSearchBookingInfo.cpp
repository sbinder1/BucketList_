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


#include "SWGFlightSearchBookingInfo.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGFlightSearchBookingInfo::SWGFlightSearchBookingInfo(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFlightSearchBookingInfo::SWGFlightSearchBookingInfo() {
    init();
}

SWGFlightSearchBookingInfo::~SWGFlightSearchBookingInfo() {
    this->cleanup();
}

void
SWGFlightSearchBookingInfo::init() {
    travel_class = new QString("");
cabin_code = new QString("");
booking_code = new QString("");
seats_remaining = new QString("");
fare_family = new QString("");
fare_basis = new QString("");
}

void
SWGFlightSearchBookingInfo::cleanup() {
    if(travel_class != NULL) {
        delete travel_class;
    }
if(cabin_code != NULL) {
        delete cabin_code;
    }
if(booking_code != NULL) {
        delete booking_code;
    }
if(seats_remaining != NULL) {
        delete seats_remaining;
    }
if(fare_family != NULL) {
        delete fare_family;
    }
if(fare_basis != NULL) {
        delete fare_basis;
    }
}

SWGFlightSearchBookingInfo*
SWGFlightSearchBookingInfo::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFlightSearchBookingInfo::fromJsonObject(QJsonObject &pJson) {
    setValue(&travel_class, pJson["travel_class"], "QString", "QString");
setValue(&cabin_code, pJson["cabin_code"], "QString", "QString");
setValue(&booking_code, pJson["booking_code"], "QString", "QString");
setValue(&seats_remaining, pJson["seats_remaining"], "QString", "QString");
setValue(&fare_family, pJson["fare_family"], "QString", "QString");
setValue(&fare_basis, pJson["fare_basis"], "QString", "QString");
}

QString
SWGFlightSearchBookingInfo::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGFlightSearchBookingInfo::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("travel_class"), travel_class, obj, QString("QString"));
    
        

    
    toJsonValue(QString("cabin_code"), cabin_code, obj, QString("QString"));
    
        

    
    toJsonValue(QString("booking_code"), booking_code, obj, QString("QString"));
    
        

    
    toJsonValue(QString("seats_remaining"), seats_remaining, obj, QString("QString"));
    
        

    
    toJsonValue(QString("fare_family"), fare_family, obj, QString("QString"));
    
        

    
    toJsonValue(QString("fare_basis"), fare_basis, obj, QString("QString"));
    
        

    return obj;
}

QString*
SWGFlightSearchBookingInfo::getTravelClass() {
    return travel_class;
}
void
SWGFlightSearchBookingInfo::setTravelClass(QString* travel_class) {
    this->travel_class = travel_class;
}

QString*
SWGFlightSearchBookingInfo::getCabinCode() {
    return cabin_code;
}
void
SWGFlightSearchBookingInfo::setCabinCode(QString* cabin_code) {
    this->cabin_code = cabin_code;
}

QString*
SWGFlightSearchBookingInfo::getBookingCode() {
    return booking_code;
}
void
SWGFlightSearchBookingInfo::setBookingCode(QString* booking_code) {
    this->booking_code = booking_code;
}

QString*
SWGFlightSearchBookingInfo::getSeatsRemaining() {
    return seats_remaining;
}
void
SWGFlightSearchBookingInfo::setSeatsRemaining(QString* seats_remaining) {
    this->seats_remaining = seats_remaining;
}

QString*
SWGFlightSearchBookingInfo::getFareFamily() {
    return fare_family;
}
void
SWGFlightSearchBookingInfo::setFareFamily(QString* fare_family) {
    this->fare_family = fare_family;
}

QString*
SWGFlightSearchBookingInfo::getFareBasis() {
    return fare_basis;
}
void
SWGFlightSearchBookingInfo::setFareBasis(QString* fare_basis) {
    this->fare_basis = fare_basis;
}



} /* namespace Swagger */

