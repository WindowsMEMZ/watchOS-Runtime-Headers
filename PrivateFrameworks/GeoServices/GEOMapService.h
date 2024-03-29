//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapService_h
#define GEOMapService_h
@import Foundation;

#include "NSCacheDelegate-Protocol.h"

@class NSArray, NSCache;

@interface GEOMapService : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _preferredLanguagesLock;
  NSArray *_preferredLanguages;
  int _overriddenResultProviderID;
  int _additionalEnabledMarketsChangedToken;
  int _experimentsChangedToken;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handleCacheLock;
  NSCache *_handleCache;
  NSObject<NSCacheDelegate> *_handleCacheDelegate;
}

/* class methods */
+ (id)sharedService;
+ (void)_attributedGeoMapItemsForPlaceDatasWithType:(int)type placeDatas:(id)datas disambiguationLabels:(id)labels handler:(id /* block */)handler;
+ (BOOL)shouldResolveAttribution;
+ (void)setShouldResolveAttribution:(BOOL)attribution;

/* instance methods */
- (id)ticketForWiFiQualityNetworkServiceRequest:(id)request;
- (id)ticketForWiFiQualityLocationServiceRequest:(id)request;
- (id)ticketForWiFiQualityTileLoadForKey:(id)key eTag:(id)tag;
- (double)wiFiQualitySearchRadiusMeters;
- (long long)wiFiQualitySearchZoomLevel;
- (double)wiFiQualitySmallSearchRadiusMeters;
- (id)serializedClientMetadataForTraits:(id)traits;
- (id)serializedClientMetadataForParsec;
- (id)serializedClientMetadataForSiri;
- (id)serializedETAFilterForSiriWithRouteAttributes:(id)attributes;
- (id)serializedSearchEvChargingParametersForSiriFromPorts:(id)ports;
- (id)_ticketForLegacyBatchReverseGeocodeLocations:(id)locations locationShifter:(id /* block */)shifter additionalPlaceTypes:(int *)types additionalPlaceTypesCount:(unsigned int)count placeTypeLimit:(int)limit traits:(id)traits;
- (id)init;
- (void)_sendInvalidateDataToSiriAndParSec;
- (void)dealloc;
- (int)_loadOverriddenResultProviderID;
- (int)localSearchProviderID;
- (void)_localeChanged:(id)changed;
- (void)_countryCodeChanged:(id)changed;
- (id)_preferredLanguages;
- (id)defaultTraits;
- (id)defaultBackgroundTraits;
- (void)setDefaultTraits:(id)traits;
- (id)ticketForMUIDs:(id)muids traits:(id)traits;
- (id)ticketForIdentifiers:(id)identifiers traits:(id)traits;
- (id)ticketForIdentifiers:(id)identifiers resultProviderID:(int)id contentProvider:(id)provider traits:(id)traits;
- (id)ticketForMUIDs:(id)muids resultProviderID:(int)id contentProvider:(id)provider traits:(id)traits;
- (id)ticketForFreshIdentifier:(id)identifier resultProviderID:(int)id contentProvider:(id)provider traits:(id)traits;
- (id)ticketForNonExpiredIdentifier:(id)identifier resultProviderID:(int)id contentProvider:(id)provider traits:(id)traits;
- (id)ticketForFreshComponents:(id)components identifier:(id)identifier resultProviderID:(int)id contentProvider:(id)provider traits:(id)traits;
- (id)ticketForFreshBusinessClaimComponentWithIdentifier:(id)identifier resultProviderID:(int)id traits:(id)traits;
- (id)ticketForExternalBusinessID:(id)id contentProvider:(id)provider traits:(id)traits;
- (id)ticketForTransitIdentifiers:(id)identifiers endDateForPlacecardSchedulesForThisBatch:(id)batch traits:(id)traits;
- (id)ticketForPhoneNumbers:(id)numbers allowCellularDataForLookup:(BOOL)lookup traits:(id)traits;
- (id)ticketForForwardGeocodeAddress:(id)address maxResults:(unsigned int)results traits:(id)traits;
- (id)ticketForForwardGeocodeAddressDictionary:(id)dictionary maxResults:(unsigned int)results traits:(id)traits;
- (id)ticketForForwardGeocodeString:(id)string maxResults:(unsigned int)results traits:(id)traits;
- (id)ticketForForwardGeocodePostalAddress:(id)address maxResults:(unsigned int)results traits:(id)traits;
- (id)_cl_ticketForForwardGeocodeString:(id)string maxResults:(unsigned int)results traits:(id)traits;
- (id)_cl_ticketForForwardGeocodeAddressDictionary:(id)dictionary maxResults:(unsigned int)results traits:(id)traits;
- (id)_cl_ticketForForwardGeocodePostalAddress:(id)address maxResults:(unsigned int)results traits:(id)traits;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x0; double x1; })coordinate shiftLocationsIfNeeded:(BOOL)needed traits:(id)traits;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x0; double x1; })coordinate shiftLocationsIfNeeded:(BOOL)needed preserveOriginalLocation:(BOOL)location traits:(id)traits;
- (id)_searchable_ticketForReverseGeocodeCoordinate:(struct { double x0; double x1; })coordinate includeEntryPoints:(BOOL)points shiftLocationsIfNeeded:(BOOL)needed preserveOriginalLocation:(BOOL)location traits:(id)traits;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x0; double x1; })coordinate includeEntryPoints:(BOOL)points shiftLocationsIfNeeded:(BOOL)needed traits:(id)traits;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x0; double x1; })coordinate includeEntryPoints:(BOOL)points shiftLocationsIfNeeded:(BOOL)needed preserveOriginalLocation:(BOOL)location traits:(id)traits;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x0; double x1; })coordinate floor:(int)floor includeEntryPoints:(BOOL)points shiftLocationsIfNeeded:(BOOL)needed preserveOriginalLocation:(BOOL)location traits:(id)traits;
- (id)_searchable_ticketForReverseGeocodeCoordinate:(struct { double x0; double x1; })coordinate floor:(int)floor includeEntryPoints:(BOOL)points shiftLocationsIfNeeded:(BOOL)needed preserveOriginalLocation:(BOOL)location traits:(id)traits;
- (id)_cl_ticketForReverseGeocodeLocation:(id)location traits:(id)traits;
- (id)ticketForReverseGeocodeLocation:(id)location traits:(id)traits;
- (id)ticketForReverseGeocodeLocation:(id)location placeTypeLimit:(int)limit traits:(id)traits;
- (id)ticketForReverseGeocodeLocation:(id)location preserveOriginalLocation:(BOOL)location placeTypeLimit:(int)limit traits:(id)traits;
- (id)ticketForBatchReverseGeocodeLocations:(id)locations shiftLocationsIfNeeded:(BOOL)needed traits:(id)traits;
- (id)ticketForBatchReverseGeocodeLocations:(id)locations shiftLocationsIfNeeded:(BOOL)needed additionalPlaceTypes:(int *)types additionalPlaceTypesCount:(unsigned int)count traits:(id)traits;
- (id)ticketForBatchReverseGeocodeLocations:(id)locations shiftLocationsIfNeeded:(BOOL)needed additionalPlaceTypes:(int *)types additionalPlaceTypesCount:(unsigned int)count placeTypeLimit:(int)limit traits:(id)traits;
- (id)ticketForBatchReverseGeocodeLocations:(id)locations locationShifter:(id /* block */)shifter additionalPlaceTypes:(int *)types additionalPlaceTypesCount:(unsigned int)count placeTypeLimit:(int)limit traits:(id)traits;
- (id)ticketForMerchantCode:(id)code rawMerchantCode:(id)code industryCategory:(id)category industryCode:(id)code paymentNetwork:(id)network transactionDate:(id)date transactionLocation:(id)location traits:(id)traits;
- (id)ticketForMerchantCode:(id)code rawMerchantCode:(id)code relyingPartyIdentifier:(id)identifier industryCategory:(id)category industryCode:(id)code paymentNetwork:(id)network transactionDate:(id)date transactionLocation:(id)location terminalId:(id)id transactionCurrencyCode:(id)code transactionType:(int)type transactionId:(id)id warsawMerchantDomain:(id)domain warsawMerchantName:(id)name warsawMerchantId:(id)id adamId:(id)id merchantId:(id)id merchantDoingBizAsName:(id)name merchantEnhancedName:(id)name merchantCity:(id)city merchantRawCity:(id)city merchantState:(id)state merchantRawState:(id)state merchantZip:(id)zip merchantAddress:(id)address merchantRawAddress:(id)address merchantCountryCode:(id)code merchantType:(id)type merchantCleanConfidenceLevel:(id)level merchantAdditionalData:(id)data merchantCanl:(id)canl fuzzyMatched:(id)matched coarseLocationUsed:(id)used traits:(id)traits;
- (id)ticketForAirportCode:(id)code terminalCode:(id)code gateCode:(id)code traits:(id)traits;
- (id)ticketForExternalTransitStationCodes:(id)codes sourceID:(id)id transactionDate:(id)date transactionLocation:(id)location traits:(id)traits;
- (id)ticketForSpatialLookupParameters:(id)parameters traits:(id)traits;
- (unsigned long long)maxParametersCountForSpatialPlaceLookup;
- (id)ticketForSpatialPlaceLookupParameters:(id)parameters traits:(id)traits;
- (unsigned long long)maxParametersCountForSpatialEventLookup;
- (id)ticketForSpatialEventLookupParameters:(id)parameters traits:(id)traits;
- (id)ticketForFeedbackRequestParameters:(id)parameters placeForProblemContext:(id)context userCredentials:(id)credentials pushToken:(id)token allowContactBackAtEmailAddress:(id)address traits:(id)traits;
- (id)ticketForFeedbackRequestData:(id)data traits:(id)traits;
- (id)ticketForFeedbackRequest:(id)request traits:(id)traits;
- (id)ticketForPlaceLookupWithSearchCategory:(id)category parentMuid:(unsigned long long)muid traits:(id)traits;
- (id)ticketForSearchPoisForBrandMUID:(unsigned long long)muid traits:(id)traits;
- (id)ticketForTransitScheduleAtStation:(unsigned long long)station line:(unsigned long long)line referenceTripID:(unsigned long long)id includeAllDirectionNames:(BOOL)names routingParameters:(id)parameters traits:(id)traits;
- (id)ticketForUpdatedTransitScheduleDetailsAtStation:(unsigned long long)station line:(unsigned long long)line referenceTripID:(unsigned long long)id includeAllDirectionNames:(BOOL)names routingParameters:(id)parameters traits:(id)traits;
- (id)ticketForTransitDeparturesAtStation:(unsigned long long)station line:(unsigned long long)line referenceTripID:(unsigned long long)id includeAllDirectionNames:(BOOL)names traits:(id)traits;
- (id)ticketForTransitTripDetailsAtStation:(unsigned long long)station line:(unsigned long long)line referenceTripID:(unsigned long long)id includeAllDirectionNames:(BOOL)names routingParameters:(id)parameters traits:(id)traits;
- (id)ticketForTransitTripIdentifiers:(id)identifiers traits:(id)traits;
- (id)ticketForNearbyTransitDeparturesWithLookupOrigin:(id)origin userLocation:(id)location traits:(id)traits;
- (id)ticketForNearbyTransitPaymentInfoForLocations:(id)locations traits:(id)traits;
- (id)ticketForSearchQuery:(id)query completionItem:(id)item maxResults:(unsigned int)results traits:(id)traits;
- (id)ticketForSearchQuery:(id)query completionItem:(id)item retainedSearch:(id)search maxResults:(unsigned int)results traits:(id)traits;
- (id)ticketForSearchQuery:(id)query completionItem:(id)item relatedSearchSuggestion:(id)suggestion retainedSearch:(id)search maxResults:(unsigned int)results traits:(id)traits;
- (id)ticketForSearchQuery:(id)query completionItem:(id)item retainedSearch:(id)search maxResults:(unsigned int)results suppressResultsRequiringAttribution:(BOOL)attribution traits:(id)traits;
- (id)ticketForSearchQuery:(id)query filters:(id)filters completionItem:(id)item retainedSearch:(id)search maxResults:(unsigned int)results suppressResultsRequiringAttribution:(BOOL)attribution traits:(id)traits;
- (id)ticketForMapItemToRefine:(id)refine traits:(id)traits;
- (id)ticketForPlaceRefinementRequestWithCoordinate:(struct { double x0; double x1; } *)coordinate addressLine:(id)line placeName:(id)name traits:(id)traits;
- (id)ticketForPlaceRefinementRequestParameters:(id)parameters traits:(id)traits;
- (id)ticketForVendorSpecificPlaceRefinementRequestParameters:(id)parameters traits:(id)traits;
- (id)ticketForCanonicalLocationSearchQueryString:(id)string traits:(id)traits;
- (id)ticketForURLQuery:(id)urlquery identifier:(id)identifier resultProviderId:(int)id contentProvider:(id)provider maxResults:(unsigned int)results traits:(id)traits;
- (id)_ticketForAutocompleteFragment:(id)fragment type:(int)type traits:(id)traits filters:(id)filters retainedSearch:(id)search tappedQuerySuggestion:(id)suggestion sessionData:(id)data;
- (id)ticketForVendorIdentifier:(id)identifier mapItemIdentifier:(id)identifier range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range traits:(id)traits;
- (id)ticketForCategoryIdentifier:(id)identifier mapItemIdentifier:(id)identifier range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range traits:(id)traits;
- (id)ticketForInterleavedInstantSearchFragment:(id)fragment filters:(id)filters sessionData:(id)data traits:(id)traits;
- (id)ticketForInterleavedAutoCompleteSearchFragment:(id)fragment filters:(id)filters sessionData:(id)data traits:(id)traits;
- (id)ticketForInterleavedLocalitiesAndLandmarksSearchFragment:(id)fragment sessionData:(id)data traits:(id)traits;
- (id)ticketForInterleavedAutoCompleteWithBrowseSearchFragment:(id)fragment filters:(id)filters retainedSearch:(id)search tappedQuerySuggestion:(id)suggestion sessionData:(id)data traits:(id)traits;
- (id)ticketForInterleavedAutoCompletePoiAddressOnly:(id)only sessionData:(id)data traits:(id)traits;
- (id)ticketForSectionedInstantSearchFragment:(id)fragment filters:(id)filters sessionData:(id)data traits:(id)traits;
- (id)ticketForSectionedAutoCompleteSearchFragment:(id)fragment filters:(id)filters sessionData:(id)data traits:(id)traits;
- (id)ticketForSectionedLocalitiesAndLandmarksSearchFragment:(id)fragment sessionData:(id)data traits:(id)traits;
- (id)ticketForCategoryListWithTraits:(id)traits isFromNoQueryState:(BOOL)state;
- (id)ticketForDFRCategoryListWithTraits:(id)traits;
- (id)ticketForSearchFieldPlaceholderWithTraits:(id)traits;
- (id)ticketForTransitLines:(id)lines withTraits:(id)traits;
- (id)ticketForNearestTransitStation:(id)station coordinate:(struct { double x0; double x1; })coordinate traits:(id)traits;
- (id)ticketForDatasetCheckWithTraits:(id)traits;
- (id)ticketforCategory:(id)category maxResults:(unsigned int)results traits:(id)traits;
- (id)searchAroundPOITicketWithIdentifier:(id)identifier categoryID:(id)id maxResults:(unsigned int)results traits:(id)traits;
- (id)ticketForSearchAlongRouteWithCategory:(id)category searchQuery:(id)query completionItem:(id)item originalWaypointRouteData:(id)data zilchData:(id)data sessionState:(id)state routeId:(id)id routeAttributes:(id)attributes maxResults:(unsigned int)results traits:(id)traits;
- (id)ticketForSearchQuery:(id)query filters:(id)filters maxResults:(unsigned int)results traits:(id)traits;
- (id)ticketForSearchQuery:(id)query filters:(id)filters maxResults:(unsigned int)results suppressResultsRequiringAttribution:(BOOL)attribution traits:(id)traits;
- (id)ticketForSearchCategory:(id)category venueIdentifier:(id)identifier maxResults:(unsigned int)results traits:(id)traits;
- (id)ticketForBrandLookupWithIMessageUid:(id)uid traits:(id)traits;
- (id)ticketForWifiFingerprintWithLocations:(id)locations wifiAccessPoints:(id)points maxLabels:(unsigned int)labels traits:(id)traits;
- (id)ticketForWifiFingerprintWithLocations:(id)locations wifiAccessPoints:(id)points maxLabels:(unsigned int)labels entryTime:(unsigned long long)time exitTime:(unsigned long long)time traits:(id)traits;
- (id)ticketForGeoIpLookupForIpAddr:(id)addr;
- (id)ticketForTerritoryForLocations:(id)locations shiftLocationsIfNeeded:(BOOL)needed traits:(id)traits;
- (id)ticketForSearchCapabilitiesWithTraits:(id)traits;
- (id)_ticketForRefreshingHandle:(id)handle traits:(id)traits;
- (id)ticketForSearchHomeWithTraits:(id)traits;
- (id)ticketForPublisherViewPublisherIdentifier:(id)identifier keywordFilter:(id)filter addressFilter:(id)filter batchSize:(unsigned int)size withTraits:(id)traits;
- (id)ticketForGuideHomeWithFilter:(id)filter guideLocation:(id)location withTraits:(id)traits;
- (id)ticketForCuratedCollections:(id)collections isBatchLookup:(BOOL)lookup overrideSuppress:(BOOL)suppress traits:(id)traits;
- (id)ticketForCuratedCollectionItems:(id)items collection:(id)collection traits:(id)traits;
- (id)ticketForAllCollectionViewWithBatchSize:(unsigned int)size keywordFilter:(id)filter addressFilter:(id)filter withTraits:(id)traits;
- (id)ticketForCitySelectorViewWithTraits:(id)traits batchSize:(unsigned int)size;
- (id)ticketForPlaceEnrichmentWithEnrichmentInfo:(id)info mapsIdentifier:(id)identifier traits:(id)traits;
- (id)ticketForRefreshingEVChargersWithIdentifiers:(id)identifiers traits:(id)traits;
- (id)ticketForGuideLocationLookupWithIds:(id)ids identifiers:(id)identifiers traits:(id)traits;
- (id)ticketForMapsHomeWithTraits:(id)traits;
- (id)ticketForHikingIntroTipWithMapItemIdentifier:(id)identifier traits:(id)traits;
- (void)trackSerializedPlaceData:(id)data;
- (void)trackMapItem:(id)item;
- (id)handleForMapItem:(id)item;
- (void)_resolveMapItemFromHandle:(id)handle withTraits:(id)traits cachePolicy:(unsigned long long)policy completionHandler:(id /* block */)handler;
- (id)_cachedMapItemForHandle:(id)handle enforceMaxAge:(BOOL)age;
- (void)_resolveMapItemFromHandle:(id)handle withTraits:(id)traits cachePolicy:(unsigned long long)policy coordinateOnlyRefinement:(BOOL)refinement completionHandler:(id /* block */)handler;
- (void)resolveMapItemFromHandle:(id)handle withTraits:(id)traits useCache:(BOOL)cache coordinateOnlyRefinement:(BOOL)refinement completionHandler:(id /* block */)handler;
- (void)resolveMapItemFromHandle:(id)handle withTraits:(id)traits useCache:(BOOL)cache completionHandler:(id /* block */)handler;
- (void)resolveMapItemFromHandle:(id)handle completionHandler:(id /* block */)handler;
- (void)resolveMapItemFromHandle:(id)handle traits:(id)traits completionHandler:(id /* block */)handler;
- (void)resolveMapItemLocallyFromHandle:(id)handle completionHandler:(id /* block */)handler;
- (id)locallyResolvedMapItemFromHandle:(id)handle error:(id *)error;
- (void)_geoMapItemsForResponseData:(id)data handler:(id /* block */)handler;
- (id)_geoMapItemForData:(id)data;
- (id)_geoMapItemsForPlacesInDetails:(id)details;
@end

#endif /* GEOMapService_h */
