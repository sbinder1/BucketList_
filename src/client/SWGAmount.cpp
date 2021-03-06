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


#include "SWGAmount.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGAmount::SWGAmount(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAmount::SWGAmount() {
    init();
}

SWGAmount::~SWGAmount() {
    this->cleanup();
}

void
SWGAmount::init() {
    currency = new QString("");
amount = new QString("");
}

void
SWGAmount::cleanup() {
    if(currency != NULL) {
        delete currency;
    }
if(amount != NULL) {
        delete amount;
    }
}

SWGAmount*
SWGAmount::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAmount::fromJsonObject(QJsonObject &pJson) {
    setValue(&currency, pJson["currency"], "QString", "QString");
setValue(&amount, pJson["amount"], "QString", "QString");
}

QString
SWGAmount::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGAmount::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("currency"), currency, obj, QString("QString"));
    
        

    
    toJsonValue(QString("amount"), amount, obj, QString("QString"));
    
        

    return obj;
}

QString*
SWGAmount::getCurrency() {
    return currency;
}
void
SWGAmount::setCurrency(QString* currency) {
    this->currency = currency;
}

QString*
SWGAmount::getAmount() {
    return amount;
}
void
SWGAmount::setAmount(QString* amount) {
    this->amount = amount;
}



} /* namespace Swagger */

