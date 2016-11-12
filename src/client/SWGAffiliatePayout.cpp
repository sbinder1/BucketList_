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


#include "SWGAffiliatePayout.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGAffiliatePayout::SWGAffiliatePayout(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAffiliatePayout::SWGAffiliatePayout() {
    init();
}

SWGAffiliatePayout::~SWGAffiliatePayout() {
    this->cleanup();
}

void
SWGAffiliatePayout::init() {
    CPC = new SWGAmount();
CPA = new SWGAmount();
CPS = new SWGAmount();
}

void
SWGAffiliatePayout::cleanup() {
    if(CPC != NULL) {
        delete CPC;
    }
if(CPA != NULL) {
        delete CPA;
    }
if(CPS != NULL) {
        delete CPS;
    }
}

SWGAffiliatePayout*
SWGAffiliatePayout::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAffiliatePayout::fromJsonObject(QJsonObject &pJson) {
    setValue(&CPC, pJson["CPC"], "SWGAmount", "SWGAmount");
setValue(&CPA, pJson["CPA"], "SWGAmount", "SWGAmount");
setValue(&CPS, pJson["CPS"], "SWGAmount", "SWGAmount");
}

QString
SWGAffiliatePayout::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGAffiliatePayout::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("CPC"), CPC, obj, QString("SWGAmount"));
    
        

    
    toJsonValue(QString("CPA"), CPA, obj, QString("SWGAmount"));
    
        

    
    toJsonValue(QString("CPS"), CPS, obj, QString("SWGAmount"));
    
        

    return obj;
}

SWGAmount*
SWGAffiliatePayout::getCPC() {
    return CPC;
}
void
SWGAffiliatePayout::setCPC(SWGAmount* CPC) {
    this->CPC = CPC;
}

SWGAmount*
SWGAffiliatePayout::getCPA() {
    return CPA;
}
void
SWGAffiliatePayout::setCPA(SWGAmount* CPA) {
    this->CPA = CPA;
}

SWGAmount*
SWGAffiliatePayout::getCPS() {
    return CPS;
}
void
SWGAffiliatePayout::setCPS(SWGAmount* CPS) {
    this->CPS = CPS;
}



} /* namespace Swagger */
