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


#include "SWGPointOfInterestResult.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGPointOfInterestResult::SWGPointOfInterestResult(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPointOfInterestResult::SWGPointOfInterestResult() {
    init();
}

SWGPointOfInterestResult::~SWGPointOfInterestResult() {
    this->cleanup();
}

void
SWGPointOfInterestResult::init() {
    title = new QString("");
main_image = new QString("");
location = new SWGGeolocation();
grades = new SWGPointOfInterestResult_grades();
categories = new QList<QString*>();
details = new SWGPointOfInterestDetails();
contextual_images = new QList<SWGImageSize*>();
geoname_id = NULL;
walk_time = 0.0;
}

void
SWGPointOfInterestResult::cleanup() {
    if(title != NULL) {
        delete title;
    }
if(main_image != NULL) {
        delete main_image;
    }
if(location != NULL) {
        delete location;
    }
if(grades != NULL) {
        delete grades;
    }
if(categories != NULL) {
        QList<QString*>* arr = categories;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete categories;
    }
if(details != NULL) {
        delete details;
    }
if(contextual_images != NULL) {
        QList<SWGImageSize*>* arr = contextual_images;
        foreach(SWGImageSize* o, *arr) {
            delete o;
        }
        delete contextual_images;
    }

if(walk_time != NULL) {
        delete walk_time;
    }
}

SWGPointOfInterestResult*
SWGPointOfInterestResult::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPointOfInterestResult::fromJsonObject(QJsonObject &pJson) {
    setValue(&title, pJson["title"], "QString", "QString");
setValue(&main_image, pJson["main_image"], "QString", "QString");
setValue(&location, pJson["location"], "SWGGeolocation", "SWGGeolocation");
setValue(&grades, pJson["grades"], "SWGPointOfInterestResult_grades", "SWGPointOfInterestResult_grades");
setValue(&categories, pJson["categories"], "QList", "QString");
setValue(&details, pJson["details"], "SWGPointOfInterestDetails", "SWGPointOfInterestDetails");
setValue(&contextual_images, pJson["contextual_images"], "QList", "SWGImageSize");
setValue(&geoname_id, pJson["geoname_id"], "qint32", "");
setValue(&walk_time, pJson["walk_time"], "SWGNumber", "SWGNumber");
}

QString
SWGPointOfInterestResult::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPointOfInterestResult::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("title"), title, obj, QString("QString"));
    
        

    
    toJsonValue(QString("main_image"), main_image, obj, QString("QString"));
    
        

    
    toJsonValue(QString("location"), location, obj, QString("SWGGeolocation"));
    
        

    
    toJsonValue(QString("grades"), grades, obj, QString("SWGPointOfInterestResult_grades"));
    
        

    
    QList<QString*>* categoriesList = categories;
    QJsonArray categoriesJsonArray;
    toJsonArray((QList<void*>*)categories, &categoriesJsonArray, "categories", "QString");

    obj->insert("categories", categoriesJsonArray);
    

    
    toJsonValue(QString("details"), details, obj, QString("SWGPointOfInterestDetails"));
    
        

    
    QList<SWGImageSize*>* contextual_imagesList = contextual_images;
    QJsonArray contextual_imagesJsonArray;
    toJsonArray((QList<void*>*)contextual_images, &contextual_imagesJsonArray, "contextual_images", "SWGImageSize");

    obj->insert("contextual_images", contextual_imagesJsonArray);
    
obj->insert("geoname_id", QJsonValue(geoname_id));

    
    toJsonValue(QString("walk_time"), walk_time, obj, QString("SWGNumber"));
    
        

    return obj;
}

QString*
SWGPointOfInterestResult::getTitle() {
    return title;
}
void
SWGPointOfInterestResult::setTitle(QString* title) {
    this->title = title;
}

QString*
SWGPointOfInterestResult::getMainImage() {
    return main_image;
}
void
SWGPointOfInterestResult::setMainImage(QString* main_image) {
    this->main_image = main_image;
}

SWGGeolocation*
SWGPointOfInterestResult::getLocation() {
    return location;
}
void
SWGPointOfInterestResult::setLocation(SWGGeolocation* location) {
    this->location = location;
}

SWGPointOfInterestResult_grades*
SWGPointOfInterestResult::getGrades() {
    return grades;
}
void
SWGPointOfInterestResult::setGrades(SWGPointOfInterestResult_grades* grades) {
    this->grades = grades;
}

QList<QString*>*
SWGPointOfInterestResult::getCategories() {
    return categories;
}
void
SWGPointOfInterestResult::setCategories(QList<QString*>* categories) {
    this->categories = categories;
}

SWGPointOfInterestDetails*
SWGPointOfInterestResult::getDetails() {
    return details;
}
void
SWGPointOfInterestResult::setDetails(SWGPointOfInterestDetails* details) {
    this->details = details;
}

QList<SWGImageSize*>*
SWGPointOfInterestResult::getContextualImages() {
    return contextual_images;
}
void
SWGPointOfInterestResult::setContextualImages(QList<SWGImageSize*>* contextual_images) {
    this->contextual_images = contextual_images;
}

qint32
SWGPointOfInterestResult::getGeonameId() {
    return geoname_id;
}
void
SWGPointOfInterestResult::setGeonameId(qint32 geoname_id) {
    this->geoname_id = geoname_id;
}

SWGNumber*
SWGPointOfInterestResult::getWalkTime() {
    return walk_time;
}
void
SWGPointOfInterestResult::setWalkTime(SWGNumber* walk_time) {
    this->walk_time = walk_time;
}



} /* namespace Swagger */

