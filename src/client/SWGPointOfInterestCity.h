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
 * SWGPointOfInterestCity.h
 * 
 * 
 */

#ifndef SWGPointOfInterestCity_H_
#define SWGPointOfInterestCity_H_

#include <QJsonObject>


#include "SWGGeolocation.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGPointOfInterestCity: public SWGObject {
public:
    SWGPointOfInterestCity();
    SWGPointOfInterestCity(QString* json);
    virtual ~SWGPointOfInterestCity();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPointOfInterestCity* fromJson(QString &jsonString);

    QString* getName();
    void setName(QString* name);
QString* getGeonameId();
    void setGeonameId(QString* geoname_id);
SWGGeolocation* getLocation();
    void setLocation(SWGGeolocation* location);
qint32 getTotalPointsOfInterest();
    void setTotalPointsOfInterest(qint32 total_points_of_interest);

private:
    QString* name;
QString* geoname_id;
SWGGeolocation* location;
qint32 total_points_of_interest;
};

} /* namespace Swagger */

#endif /* SWGPointOfInterestCity_H_ */
