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


#include "SWGTrainSearchPricing.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGTrainSearchPricing::SWGTrainSearchPricing(QString* json) {
    init();
    this->fromJson(*json);
}

SWGTrainSearchPricing::SWGTrainSearchPricing() {
    init();
}

SWGTrainSearchPricing::~SWGTrainSearchPricing() {
    this->cleanup();
}

void
SWGTrainSearchPricing::init() {
    service_class = new QString("");
booking_code = new QString("");
accomodation = new QString("");
total_price = new SWGAmount();
rate = new SWGRestrictedRate();
}

void
SWGTrainSearchPricing::cleanup() {
    if(service_class != NULL) {
        delete service_class;
    }
if(booking_code != NULL) {
        delete booking_code;
    }
if(accomodation != NULL) {
        delete accomodation;
    }
if(total_price != NULL) {
        delete total_price;
    }
if(rate != NULL) {
        delete rate;
    }
}

SWGTrainSearchPricing*
SWGTrainSearchPricing::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGTrainSearchPricing::fromJsonObject(QJsonObject &pJson) {
    setValue(&service_class, pJson["service_class"], "QString", "QString");
setValue(&booking_code, pJson["booking_code"], "QString", "QString");
setValue(&accomodation, pJson["accomodation"], "QString", "QString");
setValue(&total_price, pJson["total_price"], "SWGAmount", "SWGAmount");
setValue(&rate, pJson["rate"], "SWGRestrictedRate", "SWGRestrictedRate");
}

QString
SWGTrainSearchPricing::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGTrainSearchPricing::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("service_class"), service_class, obj, QString("QString"));
    
        

    
    toJsonValue(QString("booking_code"), booking_code, obj, QString("QString"));
    
        

    
    toJsonValue(QString("accomodation"), accomodation, obj, QString("QString"));
    
        

    
    toJsonValue(QString("total_price"), total_price, obj, QString("SWGAmount"));
    
        

    
    toJsonValue(QString("rate"), rate, obj, QString("SWGRestrictedRate"));
    
        

    return obj;
}

QString*
SWGTrainSearchPricing::getServiceClass() {
    return service_class;
}
void
SWGTrainSearchPricing::setServiceClass(QString* service_class) {
    this->service_class = service_class;
}

QString*
SWGTrainSearchPricing::getBookingCode() {
    return booking_code;
}
void
SWGTrainSearchPricing::setBookingCode(QString* booking_code) {
    this->booking_code = booking_code;
}

QString*
SWGTrainSearchPricing::getAccomodation() {
    return accomodation;
}
void
SWGTrainSearchPricing::setAccomodation(QString* accomodation) {
    this->accomodation = accomodation;
}

SWGAmount*
SWGTrainSearchPricing::getTotalPrice() {
    return total_price;
}
void
SWGTrainSearchPricing::setTotalPrice(SWGAmount* total_price) {
    this->total_price = total_price;
}

SWGRestrictedRate*
SWGTrainSearchPricing::getRate() {
    return rate;
}
void
SWGTrainSearchPricing::setRate(SWGRestrictedRate* rate) {
    this->rate = rate;
}



} /* namespace Swagger */
