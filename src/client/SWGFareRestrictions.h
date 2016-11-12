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
 * SWGFareRestrictions.h
 * 
 * 
 */

#ifndef SWGFareRestrictions_H_
#define SWGFareRestrictions_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGFareRestrictions: public SWGObject {
public:
    SWGFareRestrictions();
    SWGFareRestrictions(QString* json);
    virtual ~SWGFareRestrictions();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGFareRestrictions* fromJson(QString &jsonString);

    bool getRefundable();
    void setRefundable(bool refundable);
bool getChangePenalties();
    void setChangePenalties(bool change_penalties);

private:
    bool refundable;
bool change_penalties;
};

} /* namespace Swagger */

#endif /* SWGFareRestrictions_H_ */
