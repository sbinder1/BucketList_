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


#include "SWGNearestAirport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNearestAirport::SWGNearestAirport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNearestAirport::SWGNearestAirport() {
    init();
}

SWGNearestAirport::~SWGNearestAirport() {
    this->cleanup();
}

void
SWGNearestAirport::init() {
    airport = new QString("");
airport_name = new QString("");
city = new QString("");
city_name = new QString("");
state = new QString("");
distance = 0.0;
location = new SWGGeolocation();
aircraft_movements = NULL;
timezone = new QString("");
}

void
SWGNearestAirport::cleanup() {
    if(airport != NULL) {
        delete airport;
    }
if(airport_name != NULL) {
        delete airport_name;
    }
if(city != NULL) {
        delete city;
    }
if(city_name != NULL) {
        delete city_name;
    }
if(state != NULL) {
        delete state;
    }
if(distance != NULL) {
        delete distance;
    }
if(location != NULL) {
        delete location;
    }

if(timezone != NULL) {
        delete timezone;
    }
}

SWGNearestAirport*
SWGNearestAirport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNearestAirport::fromJsonObject(QJsonObject &pJson) {
    setValue(&airport, pJson["airport"], "QString", "QString");
setValue(&airport_name, pJson["airport_name"], "QString", "QString");
setValue(&city, pJson["city"], "QString", "QString");
setValue(&city_name, pJson["city_name"], "QString", "QString");
setValue(&state, pJson["state"], "QString", "QString");
setValue(&distance, pJson["distance"], "SWGNumber", "SWGNumber");
setValue(&location, pJson["location"], "SWGGeolocation", "SWGGeolocation");
setValue(&aircraft_movements, pJson["aircraft_movements"], "qint32", "");
setValue(&timezone, pJson["timezone"], "QString", "QString");
}

QString
SWGNearestAirport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNearestAirport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("airport"), airport, obj, QString("QString"));
    
        

    
    toJsonValue(QString("airport_name"), airport_name, obj, QString("QString"));
    
        

    
    toJsonValue(QString("city"), city, obj, QString("QString"));
    
        

    
    toJsonValue(QString("city_name"), city_name, obj, QString("QString"));
    
        

    
    toJsonValue(QString("state"), state, obj, QString("QString"));
    
        

    
    toJsonValue(QString("distance"), distance, obj, QString("SWGNumber"));
    
        

    
    toJsonValue(QString("location"), location, obj, QString("SWGGeolocation"));
    
        
obj->insert("aircraft_movements", QJsonValue(aircraft_movements));

    
    toJsonValue(QString("timezone"), timezone, obj, QString("QString"));
    
        

    return obj;
}

QString*
SWGNearestAirport::getAirport() {
    return airport;
}
void
SWGNearestAirport::setAirport(QString* airport) {
    this->airport = airport;
}

QString*
SWGNearestAirport::getAirportName() {
    return airport_name;
}
void
SWGNearestAirport::setAirportName(QString* airport_name) {
    this->airport_name = airport_name;
}

QString*
SWGNearestAirport::getCity() {
    return city;
}
void
SWGNearestAirport::setCity(QString* city) {
    this->city = city;
}

QString*
SWGNearestAirport::getCityName() {
    return city_name;
}
void
SWGNearestAirport::setCityName(QString* city_name) {
    this->city_name = city_name;
}

QString*
SWGNearestAirport::getState() {
    return state;
}
void
SWGNearestAirport::setState(QString* state) {
    this->state = state;
}

SWGNumber*
SWGNearestAirport::getDistance() {
    return distance;
}
void
SWGNearestAirport::setDistance(SWGNumber* distance) {
    this->distance = distance;
}

SWGGeolocation*
SWGNearestAirport::getLocation() {
    return location;
}
void
SWGNearestAirport::setLocation(SWGGeolocation* location) {
    this->location = location;
}

qint32
SWGNearestAirport::getAircraftMovements() {
    return aircraft_movements;
}
void
SWGNearestAirport::setAircraftMovements(qint32 aircraft_movements) {
    this->aircraft_movements = aircraft_movements;
}

QString*
SWGNearestAirport::getTimezone() {
    return timezone;
}
void
SWGNearestAirport::setTimezone(QString* timezone) {
    this->timezone = timezone;
}



} /* namespace Swagger */

