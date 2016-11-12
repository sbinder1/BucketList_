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

/*
 * SWGPointOfInterestResult.h
 * 
 * 
 */

#ifndef SWGPointOfInterestResult_H_
#define SWGPointOfInterestResult_H_

#include <QJsonObject>


#include "SWGGeolocation.h"
#include "SWGImageSize.h"
#include "SWGNumber.h"
#include "SWGPointOfInterestDetails.h"
#include "SWGPointOfInterestResult_grades.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGPointOfInterestResult: public SWGObject {
public:
    SWGPointOfInterestResult();
    SWGPointOfInterestResult(QString* json);
    virtual ~SWGPointOfInterestResult();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPointOfInterestResult* fromJson(QString &jsonString);

    QString* getTitle();
    void setTitle(QString* title);
QString* getMainImage();
    void setMainImage(QString* main_image);
SWGGeolocation* getLocation();
    void setLocation(SWGGeolocation* location);
SWGPointOfInterestResult_grades* getGrades();
    void setGrades(SWGPointOfInterestResult_grades* grades);
QList<QString*>* getCategories();
    void setCategories(QList<QString*>* categories);
SWGPointOfInterestDetails* getDetails();
    void setDetails(SWGPointOfInterestDetails* details);
QList<SWGImageSize*>* getContextualImages();
    void setContextualImages(QList<SWGImageSize*>* contextual_images);
qint32 getGeonameId();
    void setGeonameId(qint32 geoname_id);
SWGNumber* getWalkTime();
    void setWalkTime(SWGNumber* walk_time);

private:
    QString* title;
QString* main_image;
SWGGeolocation* location;
SWGPointOfInterestResult_grades* grades;
QList<QString*>* categories;
SWGPointOfInterestDetails* details;
QList<SWGImageSize*>* contextual_images;
qint32 geoname_id;
SWGNumber* walk_time;
};

} /* namespace Swagger */

#endif /* SWGPointOfInterestResult_H_ */
