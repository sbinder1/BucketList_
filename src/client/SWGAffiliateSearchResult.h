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
 * SWGAffiliateSearchResult.h
 * 
 * 
 */

#ifndef SWGAffiliateSearchResult_H_
#define SWGAffiliateSearchResult_H_

#include <QJsonObject>


#include "SWGAffiliateFlightSearchPrice.h"
#include "SWGAffiliatePayout.h"
#include "SWGFlightSearchBound.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGAffiliateSearchResult: public SWGObject {
public:
    SWGAffiliateSearchResult();
    SWGAffiliateSearchResult(QString* json);
    virtual ~SWGAffiliateSearchResult();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGAffiliateSearchResult* fromJson(QString &jsonString);

    SWGFlightSearchBound* getOutbound();
    void setOutbound(SWGFlightSearchBound* outbound);
SWGFlightSearchBound* getInbound();
    void setInbound(SWGFlightSearchBound* inbound);
SWGAffiliateFlightSearchPrice* getFare();
    void setFare(SWGAffiliateFlightSearchPrice* fare);
SWGAffiliatePayout* getPayout();
    void setPayout(SWGAffiliatePayout* payout);
QString* getAirline();
    void setAirline(QString* airline);
QString* getDeepLink();
    void setDeepLink(QString* deep_link);

private:
    SWGFlightSearchBound* outbound;
SWGFlightSearchBound* inbound;
SWGAffiliateFlightSearchPrice* fare;
SWGAffiliatePayout* payout;
QString* airline;
QString* deep_link;
};

} /* namespace Swagger */

#endif /* SWGAffiliateSearchResult_H_ */
