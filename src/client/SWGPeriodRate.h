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
 * SWGPeriodRate.h
 * 
 * 
 */

#ifndef SWGPeriodRate_H_
#define SWGPeriodRate_H_

#include <QJsonObject>


#include "SWGNumber.h"
#include <QDate>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGPeriodRate: public SWGObject {
public:
    SWGPeriodRate();
    SWGPeriodRate(QString* json);
    virtual ~SWGPeriodRate();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPeriodRate* fromJson(QString &jsonString);

    QDate* getStartDate();
    void setStartDate(QDate* start_date);
QDate* getEndDate();
    void setEndDate(QDate* end_date);
QString* getCurrency();
    void setCurrency(QString* currency);
SWGNumber* getPrice();
    void setPrice(SWGNumber* price);

private:
    QDate* start_date;
QDate* end_date;
QString* currency;
SWGNumber* price;
};

} /* namespace Swagger */

#endif /* SWGPeriodRate_H_ */