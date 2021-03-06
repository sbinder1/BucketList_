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


#include "SWGTravelRecordHeader.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGTravelRecordHeader::SWGTravelRecordHeader(QString* json) {
    init();
    this->fromJson(*json);
}

SWGTravelRecordHeader::SWGTravelRecordHeader() {
    init();
}

SWGTravelRecordHeader::~SWGTravelRecordHeader() {
    this->cleanup();
}

void
SWGTravelRecordHeader::init() {
    creation_office_id = new QString("");
owner_office_id = new QString("");
}

void
SWGTravelRecordHeader::cleanup() {
    if(creation_office_id != NULL) {
        delete creation_office_id;
    }
if(owner_office_id != NULL) {
        delete owner_office_id;
    }
}

SWGTravelRecordHeader*
SWGTravelRecordHeader::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGTravelRecordHeader::fromJsonObject(QJsonObject &pJson) {
    setValue(&creation_office_id, pJson["creation_office_id"], "QString", "QString");
setValue(&owner_office_id, pJson["owner_office_id"], "QString", "QString");
}

QString
SWGTravelRecordHeader::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGTravelRecordHeader::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("creation_office_id"), creation_office_id, obj, QString("QString"));
    
        

    
    toJsonValue(QString("owner_office_id"), owner_office_id, obj, QString("QString"));
    
        

    return obj;
}

QString*
SWGTravelRecordHeader::getCreationOfficeId() {
    return creation_office_id;
}
void
SWGTravelRecordHeader::setCreationOfficeId(QString* creation_office_id) {
    this->creation_office_id = creation_office_id;
}

QString*
SWGTravelRecordHeader::getOwnerOfficeId() {
    return owner_office_id;
}
void
SWGTravelRecordHeader::setOwnerOfficeId(QString* owner_office_id) {
    this->owner_office_id = owner_office_id;
}



} /* namespace Swagger */

