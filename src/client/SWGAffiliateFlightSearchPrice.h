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
 * SWGAffiliateFlightSearchPrice.h
 * 
 * 
 */

#ifndef SWGAffiliateFlightSearchPrice_H_
#define SWGAffiliateFlightSearchPrice_H_

#include <QJsonObject>


#include "SWGFare.h"
#include "SWGFareRestrictions.h"
#include "SWGFees.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGAffiliateFlightSearchPrice: public SWGObject {
public:
    SWGAffiliateFlightSearchPrice();
    SWGAffiliateFlightSearchPrice(QString* json);
    virtual ~SWGAffiliateFlightSearchPrice();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGAffiliateFlightSearchPrice* fromJson(QString &jsonString);

    QString* getCurrency();
    void setCurrency(QString* currency);
QString* getTotalPrice();
    void setTotalPrice(QString* total_price);
SWGFare* getPricePerAdult();
    void setPricePerAdult(SWGFare* price_per_adult);
SWGFare* getPricePerChild();
    void setPricePerChild(SWGFare* price_per_child);
SWGFare* getPricePerInfant();
    void setPricePerInfant(SWGFare* price_per_infant);
SWGFareRestrictions* getRestrictions();
    void setRestrictions(SWGFareRestrictions* restrictions);
SWGFees* getFees();
    void setFees(SWGFees* fees);

private:
    QString* currency;
QString* total_price;
SWGFare* price_per_adult;
SWGFare* price_per_child;
SWGFare* price_per_infant;
SWGFareRestrictions* restrictions;
SWGFees* fees;
};

} /* namespace Swagger */

#endif /* SWGAffiliateFlightSearchPrice_H_ */
