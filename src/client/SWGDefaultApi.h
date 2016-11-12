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

#ifndef _SWG_SWGDefaultApi_H_
#define _SWG_SWGDefaultApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGError.h"
#include "SWGAirportAutocompleteResponse.h"
#include "SWGCarSearchResponse.h"
#include "SWGNumber.h"
#include "SWGAffiliateSearchResponse.h"
#include "SWGExtremeSearchResponse.h"
#include "SWGLowFareSearchResponse.h"
#include "SWGFlightTrafficSearchResponse.h"
#include "SWGHotelSearchResponse.h"
#include "SWGHotelPropertyResponse.h"
#include "SWGLocationResponse.h"
#include "SWGNearestAirport.h"
#include "SWGRailStationAutocompleteResponse.h"
#include "SWGRailStationResponse.h"
#include "SWGTopDestinationsSearchResponse.h"
#include "SWGTopSearchesSearchResponse.h"
#include "SWGExtensiveTrainSearchResponse.h"
#include "SWGTrainScheduleSearchResponse.h"
#include <QDate>
#include "SWGTravelRecordResponse.h"
#include "SWGPointsOfInterestResponse.h"

#include <QObject>

namespace Swagger {

class SWGDefaultApi: public QObject {
    Q_OBJECT

public:
    SWGDefaultApi();
    SWGDefaultApi(QString host, QString basePath);
    ~SWGDefaultApi();

    QString host;
    QString basePath;

    void airport Autocomplete(QString* apikey, QString* term, QString* country, bool allAirports);
    void car Rental Airport Search(QString* apikey, QString* location, QString* pickUp, QString* dropOff, QString* lang, QString* currency, QString* provider, QString* rateClass, QString* ratePlan, QString* rateFilter, QList<QString*>* vehicle);
    void car Rental Geosearch(QString* apikey, SWGNumber* latitude, SWGNumber* longitude, qint32 radius, QString* pickUp, QString* dropOff, QString* lang, QString* currency, QString* provider, QString* rateClass, QString* ratePlan, QString* rateFilter, QList<QString*>* vehicle);
    void flight Affiliate Search(QString* apikey, QString* origin, QString* destination, QString* departureDate, QString* returnDate, qint32 adults, qint32 children, qint32 infants, QList<QString*>* includeMerchants, QList<QString*>* excludeMerchants, qint32 maxPrice, QString* currency, bool mobile);
    void flight Extensive Search(QString* apikey, QString* origin, QString* destination, QString* departureDate, bool oneWay, QString* duration, bool direct, QString* maxPrice, QString* aggregationMode);
    void flight Inspiration Search(QString* apikey, QString* origin, QString* destination, QString* departureDate, bool oneWay, QString* duration, bool direct, QString* maxPrice, QString* aggregationMode);
    void flight LowFare Search(QString* apikey, QString* origin, QString* destination, QString* departureDate, QString* returnDate, QString* arriveBy, QString* returnBy, qint32 adults, qint32 children, qint32 infants, QList<QString*>* includeAirlines, QList<QString*>* excludeAirlines, bool nonstop, qint32 maxPrice, QString* currency, QString* travelClass, qint32 numberOfResults);
    void flight Traffic API(QString* apikey, QString* period, QString* origin, QString* destination, qint32 numberOfResultsPerPeriod);
    void hotel Airport Search(QString* apikey, QString* location, QString* checkIn, QString* checkOut, qint32 radius, QString* lang, QString* currency, QString* chain, SWGNumber* maxRate, qint32 numberOfResults, bool allRooms, bool showSoldOut, QList<QString*>* amenity);
    void hotel Geosearch by box(QString* apikey, QString* southWestCorner, QString* northEastCorner, QString* checkIn, QString* checkOut, QString* lang, QString* currency, QString* chain, SWGNumber* maxRate, qint32 numberOfResults, bool allRooms, bool showSoldOut, QList<QString*>* amenity);
    void hotel Geosearch by circle(QString* apikey, SWGNumber* latitude, SWGNumber* longitude, qint32 radius, QString* checkIn, QString* checkOut, QString* lang, QString* currency, QString* chain, SWGNumber* maxRate, qint32 numberOfResults, bool allRooms, bool showSoldOut, QList<QString*>* amenity);
    void hotel Property Code Search(QString* apikey, QString* propertyCode, QString* checkIn, QString* checkOut, QString* lang, QString* currency, bool allRooms, bool showSoldOut);
    void location Information(QString* apikey, QString* code);
    void nearest Relevant Airport(QString* apikey, QString* latitude, QString* longitude);
    void railStation Autocomplete(QString* apikey, QString* term);
    void railStation Information(QString* apikey, QString* id);
    void top Flight Destinations(QString* apikey, QString* period, QString* origin, qint32 numberOfResults);
    void top Flight Searches(QString* apikey, QString* period, QString* origin, QString* country, QString* destination, qint32 numberOfResults);
    void train Extensive Search(QString* apikey, QString* origin, QString* destination, QString* departureDate);
    void train Schedule Search(QString* apikey, QString* origin, QDate* departureDate);
    void travel Record Retrieve(QString* apikey, QString* recordLocator, QString* lastName, QString* env);
    void yapQ City Name Search(QString* apikey, QString* cityName, QString* lang, QString* category, bool geonames, bool vibes, bool socialMedia, QString* imageSize, qint32 numberOfImages, qint32 numberOfResults);
    void yapQ Geosearch(QString* apikey, SWGNumber* latitude, SWGNumber* longitude, qint32 radius, QString* lang, QString* category, bool geonames, bool vibes, bool socialMedia, QString* imageSize, qint32 numberOfImages, qint32 numberOfResults);
    
private:
    void airport AutocompleteCallback (HttpRequestWorker * worker);
    void car Rental Airport SearchCallback (HttpRequestWorker * worker);
    void car Rental GeosearchCallback (HttpRequestWorker * worker);
    void flight Affiliate SearchCallback (HttpRequestWorker * worker);
    void flight Extensive SearchCallback (HttpRequestWorker * worker);
    void flight Inspiration SearchCallback (HttpRequestWorker * worker);
    void flight LowFare SearchCallback (HttpRequestWorker * worker);
    void flight Traffic APICallback (HttpRequestWorker * worker);
    void hotel Airport SearchCallback (HttpRequestWorker * worker);
    void hotel Geosearch by boxCallback (HttpRequestWorker * worker);
    void hotel Geosearch by circleCallback (HttpRequestWorker * worker);
    void hotel Property Code SearchCallback (HttpRequestWorker * worker);
    void location InformationCallback (HttpRequestWorker * worker);
    void nearest Relevant AirportCallback (HttpRequestWorker * worker);
    void railStation AutocompleteCallback (HttpRequestWorker * worker);
    void railStation InformationCallback (HttpRequestWorker * worker);
    void top Flight DestinationsCallback (HttpRequestWorker * worker);
    void top Flight SearchesCallback (HttpRequestWorker * worker);
    void train Extensive SearchCallback (HttpRequestWorker * worker);
    void train Schedule SearchCallback (HttpRequestWorker * worker);
    void travel Record RetrieveCallback (HttpRequestWorker * worker);
    void yapQ City Name SearchCallback (HttpRequestWorker * worker);
    void yapQ GeosearchCallback (HttpRequestWorker * worker);
    
signals:
    void airport AutocompleteSignal(QList<SWGAirportAutocompleteResponse*>* summary);
    void car Rental Airport SearchSignal(SWGCarSearchResponse* summary);
    void car Rental GeosearchSignal(SWGCarSearchResponse* summary);
    void flight Affiliate SearchSignal(SWGAffiliateSearchResponse* summary);
    void flight Extensive SearchSignal(SWGExtremeSearchResponse* summary);
    void flight Inspiration SearchSignal(SWGExtremeSearchResponse* summary);
    void flight LowFare SearchSignal(SWGLowFareSearchResponse* summary);
    void flight Traffic APISignal(SWGFlightTrafficSearchResponse* summary);
    void hotel Airport SearchSignal(SWGHotelSearchResponse* summary);
    void hotel Geosearch by boxSignal(SWGHotelSearchResponse* summary);
    void hotel Geosearch by circleSignal(SWGHotelSearchResponse* summary);
    void hotel Property Code SearchSignal(SWGHotelPropertyResponse* summary);
    void location InformationSignal(SWGLocationResponse* summary);
    void nearest Relevant AirportSignal(QList<SWGNearestAirport*>* summary);
    void railStation AutocompleteSignal(QList<SWGRailStationAutocompleteResponse*>* summary);
    void railStation InformationSignal(SWGRailStationResponse* summary);
    void top Flight DestinationsSignal(SWGTopDestinationsSearchResponse* summary);
    void top Flight SearchesSignal(SWGTopSearchesSearchResponse* summary);
    void train Extensive SearchSignal(SWGExtensiveTrainSearchResponse* summary);
    void train Schedule SearchSignal(SWGTrainScheduleSearchResponse* summary);
    void travel Record RetrieveSignal(SWGTravelRecordResponse* summary);
    void yapQ City Name SearchSignal(SWGPointsOfInterestResponse* summary);
    void yapQ GeosearchSignal(SWGPointsOfInterestResponse* summary);
    
};
}
#endif