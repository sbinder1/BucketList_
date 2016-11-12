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


#include "SWGHotelReservation.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGHotelReservation::SWGHotelReservation(QString* json) {
    init();
    this->fromJson(*json);
}

SWGHotelReservation::SWGHotelReservation() {
    init();
}

SWGHotelReservation::~SWGHotelReservation() {
    this->cleanup();
}

void
SWGHotelReservation::init() {
    id = new QString("");
check_in = NULL;
check_out = NULL;
property_code = new QString("");
property_name = new QString("");
total_price = new SWGAmount();
traveler_ids = new QList<QString*>();
booking_info = new SWGHotelReservationBookingInfo();
}

void
SWGHotelReservation::cleanup() {
    if(id != NULL) {
        delete id;
    }
if(check_in != NULL) {
        delete check_in;
    }
if(check_out != NULL) {
        delete check_out;
    }
if(property_code != NULL) {
        delete property_code;
    }
if(property_name != NULL) {
        delete property_name;
    }
if(total_price != NULL) {
        delete total_price;
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

SWGHotelReservation*
SWGHotelReservation::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGHotelReservation::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "QString", "QString");
setValue(&check_in, pJson["check_in"], "QDate", "QDate");
setValue(&check_out, pJson["check_out"], "QDate", "QDate");
setValue(&property_code, pJson["property_code"], "QString", "QString");
setValue(&property_name, pJson["property_name"], "QString", "QString");
setValue(&total_price, pJson["total_price"], "SWGAmount", "SWGAmount");
setValue(&traveler_ids, pJson["traveler_ids"], "QList", "QString");
setValue(&booking_info, pJson["booking_info"], "SWGHotelReservationBookingInfo", "SWGHotelReservationBookingInfo");
}

QString
SWGHotelReservation::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGHotelReservation::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("id"), id, obj, QString("QString"));
    
        

    
    toJsonValue(QString("check_in"), check_in, obj, QString("QDate"));
    
        

    
    toJsonValue(QString("check_out"), check_out, obj, QString("QDate"));
    
        

    
    toJsonValue(QString("property_code"), property_code, obj, QString("QString"));
    
        

    
    toJsonValue(QString("property_name"), property_name, obj, QString("QString"));
    
        

    
    toJsonValue(QString("total_price"), total_price, obj, QString("SWGAmount"));
    
        

    
    QList<QString*>* traveler_idsList = traveler_ids;
    QJsonArray traveler_idsJsonArray;
    toJsonArray((QList<void*>*)traveler_ids, &traveler_idsJsonArray, "traveler_ids", "QString");

    obj->insert("traveler_ids", traveler_idsJsonArray);
    

    
    toJsonValue(QString("booking_info"), booking_info, obj, QString("SWGHotelReservationBookingInfo"));
    
        

    return obj;
}

QString*
SWGHotelReservation::getId() {
    return id;
}
void
SWGHotelReservation::setId(QString* id) {
    this->id = id;
}

QDate*
SWGHotelReservation::getCheckIn() {
    return check_in;
}
void
SWGHotelReservation::setCheckIn(QDate* check_in) {
    this->check_in = check_in;
}

QDate*
SWGHotelReservation::getCheckOut() {
    return check_out;
}
void
SWGHotelReservation::setCheckOut(QDate* check_out) {
    this->check_out = check_out;
}

QString*
SWGHotelReservation::getPropertyCode() {
    return property_code;
}
void
SWGHotelReservation::setPropertyCode(QString* property_code) {
    this->property_code = property_code;
}

QString*
SWGHotelReservation::getPropertyName() {
    return property_name;
}
void
SWGHotelReservation::setPropertyName(QString* property_name) {
    this->property_name = property_name;
}

SWGAmount*
SWGHotelReservation::getTotalPrice() {
    return total_price;
}
void
SWGHotelReservation::setTotalPrice(SWGAmount* total_price) {
    this->total_price = total_price;
}

QList<QString*>*
SWGHotelReservation::getTravelerIds() {
    return traveler_ids;
}
void
SWGHotelReservation::setTravelerIds(QList<QString*>* traveler_ids) {
    this->traveler_ids = traveler_ids;
}

SWGHotelReservationBookingInfo*
SWGHotelReservation::getBookingInfo() {
    return booking_info;
}
void
SWGHotelReservation::setBookingInfo(SWGHotelReservationBookingInfo* booking_info) {
    this->booking_info = booking_info;
}



} /* namespace Swagger */
