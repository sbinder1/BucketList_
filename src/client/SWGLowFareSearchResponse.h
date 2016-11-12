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
 * SWGLowFareSearchResponse.h
 * 
 * 
 */

#ifndef SWGLowFareSearchResponse_H_
#define SWGLowFareSearchResponse_H_

#include <QJsonObject>


#include "SWGLowFareSearchResult.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGLowFareSearchResponse: public SWGObject {
public:
    SWGLowFareSearchResponse();
    SWGLowFareSearchResponse(QString* json);
    virtual ~SWGLowFareSearchResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGLowFareSearchResponse* fromJson(QString &jsonString);

    QString* getCurrency();
    void setCurrency(QString* currency);
QList<SWGLowFareSearchResult*>* getResults();
    void setResults(QList<SWGLowFareSearchResult*>* results);

private:
    QString* currency;
QList<SWGLowFareSearchResult*>* results;
};

} /* namespace Swagger */

#endif /* SWGLowFareSearchResponse_H_ */
