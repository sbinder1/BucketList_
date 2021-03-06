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


#include "SWGHotelPropertyResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGHotelPropertyResponse::SWGHotelPropertyResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGHotelPropertyResponse::SWGHotelPropertyResponse() {
    init();
}

SWGHotelPropertyResponse::~SWGHotelPropertyResponse() {
    this->cleanup();
}

void
SWGHotelPropertyResponse::init() {
    property_code = new QString("");
property_name = new QString("");
location = new SWGGeolocation();
address = new SWGAddress();
total_price = new SWGAmount();
min_daily_rate = new SWGAmount();
contacts = new QList<SWGContact*>();
amenities = new QList<SWGAmenity*>();
awards = new QList<SWGAward*>();
images = new QList<SWGImage*>();
rooms = new QList<SWGHotelRoom*>();
more_rooms_at_this_hotel = new SWGLink();
}

void
SWGHotelPropertyResponse::cleanup() {
    if(property_code != NULL) {
        delete property_code;
    }
if(property_name != NULL) {
        delete property_name;
    }
if(location != NULL) {
        delete location;
    }
if(address != NULL) {
        delete address;
    }
if(total_price != NULL) {
        delete total_price;
    }
if(min_daily_rate != NULL) {
        delete min_daily_rate;
    }
if(contacts != NULL) {
        QList<SWGContact*>* arr = contacts;
        foreach(SWGContact* o, *arr) {
            delete o;
        }
        delete contacts;
    }
if(amenities != NULL) {
        QList<SWGAmenity*>* arr = amenities;
        foreach(SWGAmenity* o, *arr) {
            delete o;
        }
        delete amenities;
    }
if(awards != NULL) {
        QList<SWGAward*>* arr = awards;
        foreach(SWGAward* o, *arr) {
            delete o;
        }
        delete awards;
    }
if(images != NULL) {
        QList<SWGImage*>* arr = images;
        foreach(SWGImage* o, *arr) {
            delete o;
        }
        delete images;
    }
if(rooms != NULL) {
        QList<SWGHotelRoom*>* arr = rooms;
        foreach(SWGHotelRoom* o, *arr) {
            delete o;
        }
        delete rooms;
    }
if(more_rooms_at_this_hotel != NULL) {
        delete more_rooms_at_this_hotel;
    }
}

SWGHotelPropertyResponse*
SWGHotelPropertyResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGHotelPropertyResponse::fromJsonObject(QJsonObject &pJson) {
    setValue(&property_code, pJson["property_code"], "QString", "QString");
setValue(&property_name, pJson["property_name"], "QString", "QString");
setValue(&location, pJson["location"], "SWGGeolocation", "SWGGeolocation");
setValue(&address, pJson["address"], "SWGAddress", "SWGAddress");
setValue(&total_price, pJson["total_price"], "SWGAmount", "SWGAmount");
setValue(&min_daily_rate, pJson["min_daily_rate"], "SWGAmount", "SWGAmount");
setValue(&contacts, pJson["contacts"], "QList", "SWGContact");
setValue(&amenities, pJson["amenities"], "QList", "SWGAmenity");
setValue(&awards, pJson["awards"], "QList", "SWGAward");
setValue(&images, pJson["images"], "QList", "SWGImage");
setValue(&rooms, pJson["rooms"], "QList", "SWGHotelRoom");
setValue(&more_rooms_at_this_hotel, pJson["more_rooms_at_this_hotel"], "SWGLink", "SWGLink");
}

QString
SWGHotelPropertyResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGHotelPropertyResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("property_code"), property_code, obj, QString("QString"));
    
        

    
    toJsonValue(QString("property_name"), property_name, obj, QString("QString"));
    
        

    
    toJsonValue(QString("location"), location, obj, QString("SWGGeolocation"));
    
        

    
    toJsonValue(QString("address"), address, obj, QString("SWGAddress"));
    
        

    
    toJsonValue(QString("total_price"), total_price, obj, QString("SWGAmount"));
    
        

    
    toJsonValue(QString("min_daily_rate"), min_daily_rate, obj, QString("SWGAmount"));
    
        

    
    QList<SWGContact*>* contactsList = contacts;
    QJsonArray contactsJsonArray;
    toJsonArray((QList<void*>*)contacts, &contactsJsonArray, "contacts", "SWGContact");

    obj->insert("contacts", contactsJsonArray);
    

    
    QList<SWGAmenity*>* amenitiesList = amenities;
    QJsonArray amenitiesJsonArray;
    toJsonArray((QList<void*>*)amenities, &amenitiesJsonArray, "amenities", "SWGAmenity");

    obj->insert("amenities", amenitiesJsonArray);
    

    
    QList<SWGAward*>* awardsList = awards;
    QJsonArray awardsJsonArray;
    toJsonArray((QList<void*>*)awards, &awardsJsonArray, "awards", "SWGAward");

    obj->insert("awards", awardsJsonArray);
    

    
    QList<SWGImage*>* imagesList = images;
    QJsonArray imagesJsonArray;
    toJsonArray((QList<void*>*)images, &imagesJsonArray, "images", "SWGImage");

    obj->insert("images", imagesJsonArray);
    

    
    QList<SWGHotelRoom*>* roomsList = rooms;
    QJsonArray roomsJsonArray;
    toJsonArray((QList<void*>*)rooms, &roomsJsonArray, "rooms", "SWGHotelRoom");

    obj->insert("rooms", roomsJsonArray);
    

    
    toJsonValue(QString("more_rooms_at_this_hotel"), more_rooms_at_this_hotel, obj, QString("SWGLink"));
    
        

    return obj;
}

QString*
SWGHotelPropertyResponse::getPropertyCode() {
    return property_code;
}
void
SWGHotelPropertyResponse::setPropertyCode(QString* property_code) {
    this->property_code = property_code;
}

QString*
SWGHotelPropertyResponse::getPropertyName() {
    return property_name;
}
void
SWGHotelPropertyResponse::setPropertyName(QString* property_name) {
    this->property_name = property_name;
}

SWGGeolocation*
SWGHotelPropertyResponse::getLocation() {
    return location;
}
void
SWGHotelPropertyResponse::setLocation(SWGGeolocation* location) {
    this->location = location;
}

SWGAddress*
SWGHotelPropertyResponse::getAddress() {
    return address;
}
void
SWGHotelPropertyResponse::setAddress(SWGAddress* address) {
    this->address = address;
}

SWGAmount*
SWGHotelPropertyResponse::getTotalPrice() {
    return total_price;
}
void
SWGHotelPropertyResponse::setTotalPrice(SWGAmount* total_price) {
    this->total_price = total_price;
}

SWGAmount*
SWGHotelPropertyResponse::getMinDailyRate() {
    return min_daily_rate;
}
void
SWGHotelPropertyResponse::setMinDailyRate(SWGAmount* min_daily_rate) {
    this->min_daily_rate = min_daily_rate;
}

QList<SWGContact*>*
SWGHotelPropertyResponse::getContacts() {
    return contacts;
}
void
SWGHotelPropertyResponse::setContacts(QList<SWGContact*>* contacts) {
    this->contacts = contacts;
}

QList<SWGAmenity*>*
SWGHotelPropertyResponse::getAmenities() {
    return amenities;
}
void
SWGHotelPropertyResponse::setAmenities(QList<SWGAmenity*>* amenities) {
    this->amenities = amenities;
}

QList<SWGAward*>*
SWGHotelPropertyResponse::getAwards() {
    return awards;
}
void
SWGHotelPropertyResponse::setAwards(QList<SWGAward*>* awards) {
    this->awards = awards;
}

QList<SWGImage*>*
SWGHotelPropertyResponse::getImages() {
    return images;
}
void
SWGHotelPropertyResponse::setImages(QList<SWGImage*>* images) {
    this->images = images;
}

QList<SWGHotelRoom*>*
SWGHotelPropertyResponse::getRooms() {
    return rooms;
}
void
SWGHotelPropertyResponse::setRooms(QList<SWGHotelRoom*>* rooms) {
    this->rooms = rooms;
}

SWGLink*
SWGHotelPropertyResponse::getMoreRoomsAtThisHotel() {
    return more_rooms_at_this_hotel;
}
void
SWGHotelPropertyResponse::setMoreRoomsAtThisHotel(SWGLink* more_rooms_at_this_hotel) {
    this->more_rooms_at_this_hotel = more_rooms_at_this_hotel;
}



} /* namespace Swagger */

