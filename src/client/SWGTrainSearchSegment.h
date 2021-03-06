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
 * SWGTrainSearchSegment.h
 * 
 * 
 */

#ifndef SWGTrainSearchSegment_H_
#define SWGTrainSearchSegment_H_

#include <QJsonObject>


#include "SWGAirport.h"
#include "SWGStation.h"
#include "SWGTrainSearchPricing.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGTrainSearchSegment: public SWGObject {
public:
    SWGTrainSearchSegment();
    SWGTrainSearchSegment(QString* json);
    virtual ~SWGTrainSearchSegment();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGTrainSearchSegment* fromJson(QString &jsonString);

    QString* getDepartsAt();
    void setDepartsAt(QString* departs_at);
QString* getArrivesAt();
    void setArrivesAt(QString* arrives_at);
SWGStation* getDepartureStation();
    void setDepartureStation(SWGStation* departure_station);
SWGAirport* getArrivalStation();
    void setArrivalStation(SWGAirport* arrival_station);
QString* getMarketingCompany();
    void setMarketingCompany(QString* marketing_company);
QString* getOperatingCompany();
    void setOperatingCompany(QString* operating_company);
QString* getTrainNumber();
    void setTrainNumber(QString* train_number);
QString* getTrainType();
    void setTrainType(QString* train_type);
QList<SWGTrainSearchPricing*>* getPrices();
    void setPrices(QList<SWGTrainSearchPricing*>* prices);

private:
    QString* departs_at;
QString* arrives_at;
SWGStation* departure_station;
SWGAirport* arrival_station;
QString* marketing_company;
QString* operating_company;
QString* train_number;
QString* train_type;
QList<SWGTrainSearchPricing*>* prices;
};

} /* namespace Swagger */

#endif /* SWGTrainSearchSegment_H_ */
