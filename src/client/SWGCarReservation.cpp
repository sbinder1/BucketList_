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


#include "SWGCarReservation.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCarReservation::SWGCarReservation(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCarReservation::SWGCarReservation() {
    init();
}

SWGCarReservation::~SWGCarReservation() {
    this->cleanup();
}

void
SWGCarReservation::init() {
    id = new QString("");
pick_up = new QString("");
drop_off = new QString("");
provider = new SWGCompany();
origin = new QString("");
car = new SWGVehicle();
traveler_ids = new QList<QString*>();
booking_info = new SWGCarReservationBookingInfo();
}

void
SWGCarReservation::cleanup() {
    if(id != NULL) {
        delete id;
    }
if(pick_up != NULL) {
        delete pick_up;
    }
if(drop_off != NULL) {
        delete drop_off;
    }
if(provider != NULL) {
        delete provider;
    }
if(origin != NULL) {
        delete origin;
    }
if(car != NULL) {
        delete car;
    }
if(traveler_ids != NULL) {
        QList<QString*>* arr = traveler_ids;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete traveler_ids;
    }
if(booking_info != NULL) {
        delete booking_info;
    }
}

SWGCarReservation*
SWGCarReservation::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCarReservation::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "QString", "QString");
setValue(&pick_up, pJson["pick_up"], "QString", "QString");
setValue(&drop_off, pJson["drop_off"], "QString", "QString");
setValue(&provider, pJson["provider"], "SWGCompany", "SWGCompany");
setValue(&origin, pJson["origin"], "QString", "QString");
setValue(&car, pJson["car"], "SWGVehicle", "SWGVehicle");
setValue(&traveler_ids, pJson["traveler_ids"], "QList", "QString");
setValue(&booking_info, pJson["booking_info"], "SWGCarReservationBookingInfo", "SWGCarReservationBookingInfo");
}

QString
SWGCarReservation::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCarReservation::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("id"), id, obj, QString("QString"));
    
        

    
    toJsonValue(QString("pick_up"), pick_up, obj, QString("QString"));
    
        

    
    toJsonValue(QString("drop_off"), drop_off, obj, QString("QString"));
    
        

    
    toJsonValue(QString("provider"), provider, obj, QString("SWGCompany"));
    
        

    
    toJsonValue(QString("origin"), origin, obj, QString("QString"));
    
        

    
    toJsonValue(QString("car"), car, obj, QString("SWGVehicle"));
    
        

    
    QList<QString*>* traveler_idsList = traveler_ids;
    QJsonArray traveler_idsJsonArray;
    toJsonArray((QList<void*>*)traveler_ids, &traveler_idsJsonArray, "traveler_ids", "QString");

    obj->insert("traveler_ids", traveler_idsJsonArray);
    

    
    toJsonValue(QString("booking_info"), booking_info, obj, QString("SWGCarReservationBookingInfo"));
    
        

    return obj;
}

QString*
SWGCarReservation::getId() {
    return id;
}
void
SWGCarReservation::setId(QString* id) {
    this->id = id;
}

QString*
SWGCarReservation::getPickUp() {
    return pick_up;
}
void
SWGCarReservation::setPickUp(QString* pick_up) {
    this->pick_up = pick_up;
}

QString*
SWGCarReservation::getDropOff() {
    return drop_off;
}
void
SWGCarReservation::setDropOff(QString* drop_off) {
    this->drop_off = drop_off;
}

SWGCompany*
SWGCarReservation::getProvider() {
    return provider;
}
void
SWGCarReservation::setProvider(SWGCompany* provider) {
    this->provider = provider;
}

QString*
SWGCarReservation::getOrigin() {
    return origin;
}
void
SWGCarReservation::setOrigin(QString* origin) {
    this->origin = origin;
}

SWGVehicle*
SWGCarReservation::getCar() {
    return car;
}
void
SWGCarReservation::setCar(SWGVehicle* car) {
    this->car = car;
}

QList<QString*>*
SWGCarReservation::getTravelerIds() {
    return traveler_ids;
}
void
SWGCarReservation::setTravelerIds(QList<QString*>* traveler_ids) {
    this->traveler_ids = traveler_ids;
}

SWGCarReservationBookingInfo*
SWGCarReservation::getBookingInfo() {
    return booking_info;
}
void
SWGCarReservation::setBookingInfo(SWGCarReservationBookingInfo* booking_info) {
    this->booking_info = booking_info;
}



} /* namespace Swagger */

