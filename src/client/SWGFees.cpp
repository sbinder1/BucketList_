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


#include "SWGFees.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGFees::SWGFees(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFees::SWGFees() {
    init();
}

SWGFees::~SWGFees() {
    this->cleanup();
}

void
SWGFees::init() {
    service_fees = new QString("");
creditcard_fees = new QString("");
}

void
SWGFees::cleanup() {
    if(service_fees != NULL) {
        delete service_fees;
    }
if(creditcard_fees != NULL) {
        delete creditcard_fees;
    }
}

SWGFees*
SWGFees::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFees::fromJsonObject(QJsonObject &pJson) {
    setValue(&service_fees, pJson["service_fees"], "QString", "QString");
setValue(&creditcard_fees, pJson["creditcard_fees"], "QString", "QString");
}

QString
SWGFees::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGFees::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("service_fees"), service_fees, obj, QString("QString"));
    
        

    
    toJsonValue(QString("creditcard_fees"), creditcard_fees, obj, QString("QString"));
    
        

    return obj;
}

QString*
SWGFees::getServiceFees() {
    return service_fees;
}
void
SWGFees::setServiceFees(QString* service_fees) {
    this->service_fees = service_fees;
}

QString*
SWGFees::getCreditcardFees() {
    return creditcard_fees;
}
void
SWGFees::setCreditcardFees(QString* creditcard_fees) {
    this->creditcard_fees = creditcard_fees;
}



} /* namespace Swagger */

