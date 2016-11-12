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


#include "SWGLocationResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGLocationResponse::SWGLocationResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGLocationResponse::SWGLocationResponse() {
    init();
}

SWGLocationResponse::~SWGLocationResponse() {
    this->cleanup();
}

void
SWGLocationResponse::init() {
    city = new SWGCityInformation();
airports = new QList<SWGAirportInformation*>();
}

void
SWGLocationResponse::cleanup() {
    if(city != NULL) {
        delete city;
    }
if(airports != NULL) {
        QList<SWGAirportInformation*>* arr = airports;
        foreach(SWGAirportInformation* o, *arr) {
            delete o;
        }
        delete airports;
    }
}

SWGLocationResponse*
SWGLocationResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGLocationResponse::fromJsonObject(QJsonObject &pJson) {
    setValue(&city, pJson["city"], "SWGCityInformation", "SWGCityInformation");
setValue(&airports, pJson["airports"], "QList", "SWGAirportInformation");
}

QString
SWGLocationResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGLocationResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("city"), city, obj, QString("SWGCityInformation"));
    
        

    
    QList<SWGAirportInformation*>* airportsList = airports;
    QJsonArray airportsJsonArray;
    toJsonArray((QList<void*>*)airports, &airportsJsonArray, "airports", "SWGAirportInformation");

    obj->insert("airports", airportsJsonArray);
    

    return obj;
}

SWGCityInformation*
SWGLocationResponse::getCity() {
    return city;
}
void
SWGLocationResponse::setCity(SWGCityInformation* city) {
    this->city = city;
}

QList<SWGAirportInformation*>*
SWGLocationResponse::getAirports() {
    return airports;
}
void
SWGLocationResponse::setAirports(QList<SWGAirportInformation*>* airports) {
    this->airports = airports;
}



} /* namespace Swagger */
