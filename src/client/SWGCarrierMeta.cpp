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


#include "SWGCarrierMeta.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCarrierMeta::SWGCarrierMeta(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCarrierMeta::SWGCarrierMeta() {
    init();
}

SWGCarrierMeta::~SWGCarrierMeta() {
    this->cleanup();
}

void
SWGCarrierMeta::init() {
    }

void
SWGCarrierMeta::cleanup() {
    }

SWGCarrierMeta*
SWGCarrierMeta::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCarrierMeta::fromJsonObject(QJsonObject &pJson) {
    }

QString
SWGCarrierMeta::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCarrierMeta::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    return obj;
}



} /* namespace Swagger */
