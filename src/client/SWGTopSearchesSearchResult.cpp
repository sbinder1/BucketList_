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


#include "SWGTopSearchesSearchResult.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGTopSearchesSearchResult::SWGTopSearchesSearchResult(QString* json) {
    init();
    this->fromJson(*json);
}

SWGTopSearchesSearchResult::SWGTopSearchesSearchResult() {
    init();
}

SWGTopSearchesSearchResult::~SWGTopSearchesSearchResult() {
    this->cleanup();
}

void
SWGTopSearchesSearchResult::init() {
    destination = new QString("");
searches = NULL;
searches_prior_year = NULL;
}

void
SWGTopSearchesSearchResult::cleanup() {
    if(destination != NULL) {
        delete destination;
    }


}

SWGTopSearchesSearchResult*
SWGTopSearchesSearchResult::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGTopSearchesSearchResult::fromJsonObject(QJsonObject &pJson) {
    setValue(&destination, pJson["destination"], "QString", "QString");
setValue(&searches, pJson["searches"], "qint32", "");
setValue(&searches_prior_year, pJson["searches_prior_year"], "qint32", "");
}

QString
SWGTopSearchesSearchResult::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGTopSearchesSearchResult::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("destination"), destination, obj, QString("QString"));
    
        
obj->insert("searches", QJsonValue(searches));
obj->insert("searches_prior_year", QJsonValue(searches_prior_year));

    return obj;
}

QString*
SWGTopSearchesSearchResult::getDestination() {
    return destination;
}
void
SWGTopSearchesSearchResult::setDestination(QString* destination) {
    this->destination = destination;
}

qint32
SWGTopSearchesSearchResult::getSearches() {
    return searches;
}
void
SWGTopSearchesSearchResult::setSearches(qint32 searches) {
    this->searches = searches;
}

qint32
SWGTopSearchesSearchResult::getSearchesPriorYear() {
    return searches_prior_year;
}
void
SWGTopSearchesSearchResult::setSearchesPriorYear(qint32 searches_prior_year) {
    this->searches_prior_year = searches_prior_year;
}



} /* namespace Swagger */

