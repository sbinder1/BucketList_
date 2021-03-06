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
 * SWGFlightTrafficSearchResult.h
 * 
 * 
 */

#ifndef SWGFlightTrafficSearchResult_H_
#define SWGFlightTrafficSearchResult_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGFlightTrafficSearchResult: public SWGObject {
public:
    SWGFlightTrafficSearchResult();
    SWGFlightTrafficSearchResult(QString* json);
    virtual ~SWGFlightTrafficSearchResult();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGFlightTrafficSearchResult* fromJson(QString &jsonString);

    QString* getDestination();
    void setDestination(QString* destination);
qint32 getFlights();
    void setFlights(qint32 flights);
qint32 getTravelers();
    void setTravelers(qint32 travelers);

private:
    QString* destination;
qint32 flights;
qint32 travelers;
};

} /* namespace Swagger */

#endif /* SWGFlightTrafficSearchResult_H_ */
