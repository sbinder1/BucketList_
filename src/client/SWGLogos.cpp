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


#include "SWGLogos.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGLogos::SWGLogos(QString* json) {
    init();
    this->fromJson(*json);
}

SWGLogos::SWGLogos() {
    init();
}

SWGLogos::~SWGLogos() {
    this->cleanup();
}

void
SWGLogos::init() {
    small = new QString("");
medium = new QString("");
}

void
SWGLogos::cleanup() {
    if(small != NULL) {
        delete small;
    }
if(medium != NULL) {
        delete medium;
    }
}

SWGLogos*
SWGLogos::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGLogos::fromJsonObject(QJsonObject &pJson) {
    setValue(&small, pJson["small"], "QString", "QString");
setValue(&medium, pJson["medium"], "QString", "QString");
}

QString
SWGLogos::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGLogos::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("small"), small, obj, QString("QString"));
    
        

    
    toJsonValue(QString("medium"), medium, obj, QString("QString"));
    
        

    return obj;
}

QString*
SWGLogos::getSmall() {
    return small;
}
void
SWGLogos::setSmall(QString* small) {
    this->small = small;
}

QString*
SWGLogos::getMedium() {
    return medium;
}
void
SWGLogos::setMedium(QString* medium) {
    this->medium = medium;
}



} /* namespace Swagger */

