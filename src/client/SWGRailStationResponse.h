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
 * SWGRailStationResponse.h
 * 
 * 
 */

#ifndef SWGRailStationResponse_H_
#define SWGRailStationResponse_H_

#include <QJsonObject>


#include "SWGGeolocation.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGRailStationResponse: public SWGObject {
public:
    SWGRailStationResponse();
    SWGRailStationResponse(QString* json);
    virtual ~SWGRailStationResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGRailStationResponse* fromJson(QString &jsonString);

    QString* getId();
    void setId(QString* id);
QString* getType();
    void setType(QString* type);
QString* getName();
    void setName(QString* name);
QString* getShortName();
    void setShortName(QString* short_name);
QString* getCountry();
    void setCountry(QString* country);
SWGGeolocation* getLocation();
    void setLocation(SWGGeolocation* location);
QString* getTraffic();
    void setTraffic(QString* traffic);

private:
    QString* id;
QString* type;
QString* name;
QString* short_name;
QString* country;
SWGGeolocation* location;
QString* traffic;
};

} /* namespace Swagger */

#endif /* SWGRailStationResponse_H_ */