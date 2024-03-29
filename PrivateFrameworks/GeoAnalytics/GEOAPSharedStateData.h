//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOAPSharedStateData_h
#define GEOAPSharedStateData_h
@import Foundation;

#include "GEOAnalyticsPipelineStateData.h"

@class geo_isolater, geo_reentrant_isolater;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEOAPSharedStateData : GEOAnalyticsPipelineStateData {
  /* instance variables */
  BOOL _isMapsApp;
  geo_reentrant_isolater *_placeIso;
  geo_isolater *_mapViewIso;
  geo_isolater *_mapSettingsIso;
  geo_isolater *_mapUIShownIso;
  geo_isolater *_userProfileIso;
  geo_isolater *_mapFeaturesIso;
  geo_isolater *_mapUserSettingsIso;
  geo_isolater *_routingSettingsIso;
  geo_isolater *_searchResultsStateIso;
  geo_isolater *_impressionObjectStateIso;
  geo_isolater *_tapEventStateIso;
  geo_isolater *_actionButtonDetailsStateIso;
  geo_isolater *_photoSubmissionStateIso;
  geo_isolater *_ratingSubmissionStateIso;
  geo_isolater *_ratingPhotoSubmissionStateIso;
  geo_isolater *_placeMapsIdIso;
  NSObject<OS_dispatch_queue> *_taskQueue;
  NSObject<OS_dispatch_source> *_periodicSettingsTimer;
}

/* class methods */
+ (id)sharedData;

/* instance methods */
- (id)init;
- (void)_resetTaskTimer;
- (void)_stopTaskTimer;
- (void)_handleTaskTimer;
- (void)setCarPlayInfo:(id)info;
- (void)_performSyncStateUpdateWithIsolator:(id)isolator updateBlock:(id /* block */)block;
- (void)performMapViewStateUpdate:(id /* block */)update;
- (void)performPlaceCardStateUpdate:(id /* block */)update;
- (void)clearPlaceCardStateData;
- (void)populateWithPlaceActionDetails:(id)details;
- (void)_populateWithGEOTransitPlaceCard:(id)card;
- (void)_populateWithGEOTransitDepartureSequenceUsage:(id)usage;
- (void)populateWithPlace:(id)place timestamp:(double)timestamp resultIndex:(int)index;
- (void)populateWithChildPlace:(id)place timestamp:(double)timestamp resultIndex:(int)index;
- (BOOL)hasPlaceCardStateData;
- (BOOL)hasPlaceCard_PlaceActionDetails;
- (BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard;
- (BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard_TransitDepartureSequence;
- (void)addPlaceCardModulesForRevealAction:(id)action;
- (BOOL)hasMapsServerData;
- (BOOL)hasSuggestionsData;
- (void)clearSuggestionsData;
- (BOOL)hasMapRestoreData;
- (BOOL)hasMapLaunchData;
- (int)moduleButtonLinkTypeAsGEOActionButtonLinkType:(int)type;
- (int)moduleButtonTypeAsGEOModuleButtonType:(long long)type;
- (int)navVoiceVolumeAsGEONavVoiceVolume;
- (int)_geoVoiceGuidanceLevelFromAPVoiceGuidanceLevel:(int)level;
- (int)_geoTransportModeForAPTransportMode:(int)mode;
- (int)transportModeAsGEOTransportMode;
- (int)activeNavModeAsGEOTransportType;
- (int)locationPrecisionTypeAsGEOSettingsLocationType;
- (int)layoutInfoAsGEOLayoutInfo;
- (int)layoutStyleAsGEOLayoutStyle;
- (void)_performUserProfileStateOperation:(id /* block */)operation;
- (void)setUserProfileUserIsLoggedIntoICloud:(BOOL)icloud;
- (void)setUserProfileAvailableActions:(id)actions;
- (void)performMapUIShownStateOperation:(id /* block */)operation;
- (void)setMapUiShownAqiShown:(BOOL)shown;
- (void)setHasMapUiShownAqiShown:(BOOL)shown;
- (void)setMapUiShownWeatherShown:(BOOL)shown;
- (void)setHasMapUiShownWeatherShown:(BOOL)shown;
- (void)setMapUiShownActiveNavMode:(int)mode;
- (void)setHasMapUiShownActiveNavMode:(BOOL)mode;
- (void)performMapSettingsStateOperation:(id /* block */)operation;
- (void)setNavVoiceGuidanceLevel:(int)level forTransportMode:(int)mode;
- (void)setMapSettingsNavVolume:(int)volume;
- (void)setHasMapSettingsNavVolume:(BOOL)volume;
- (void)setMapSettingsTransportMode:(int)mode;
- (void)setHasMapSettingsTransportMode:(BOOL)mode;
- (void)setMapSettingsAvoidHighways:(BOOL)highways;
- (void)setHasMapSettingsAvoidHighways:(BOOL)highways;
- (void)setMapSettingsAvoidTolls:(BOOL)tolls;
- (void)setHasMapSettingsAvoidTolls:(BOOL)tolls;
- (void)setMapSettingsFindMyCarEnabled:(BOOL)enabled;
- (void)setHasMapSettingsFindMyCarEnabled:(BOOL)enabled;
- (void)setMapSettingsHeadingEnabled:(BOOL)enabled;
- (void)setHasMapSettingsHeadingEnabled:(BOOL)enabled;
- (void)setMapSettingsLabelEnabled:(BOOL)enabled;
- (void)setHasMapSettingsLabelEnabled:(BOOL)enabled;
- (void)setMapSettingsPauseSpokenAudioEnabled:(BOOL)enabled;
- (void)setHasMapSettingsPauseSpokenAudioEnabled:(BOOL)enabled;
- (void)setMapSettingsSpeedLimitEnabled:(BOOL)enabled;
- (void)setHasMapSettingsSpeedLimitEnabled:(BOOL)enabled;
- (void)setMapSettingsTrafficEnabled:(BOOL)enabled;
- (void)setHasMapSettingsTrafficEnabled:(BOOL)enabled;
- (void)setMapSettingsAvoidHills:(BOOL)hills;
- (void)setHasMapSettingsAvoidHills:(BOOL)hills;
- (void)setMapSettingsAvoidStairs:(BOOL)stairs;
- (void)setHasMapSettingsAvoidStairs:(BOOL)stairs;
- (void)setMapSettingsAvoidBusyRoads:(BOOL)roads;
- (void)setHasMapSettingsAvoidBusyRoads:(BOOL)roads;
- (void)setMapSettingsLocationPrecisionType:(int)type;
- (void)setHasMapSettingsLocationPrecisionType:(BOOL)type;
- (void)setMapSettingsEBike:(BOOL)ebike;
- (void)setHasMapSettingsEBike:(BOOL)ebike;
- (void)setMapSettingsWalkingAvoidHills:(BOOL)hills;
- (void)setHasMapSettingsWalkingAvoidHills:(BOOL)hills;
- (void)setMapSettingsWalkingAvoidStairs:(BOOL)stairs;
- (void)setHasMapSettingsWalkingAvoidStairs:(BOOL)stairs;
- (void)setMapSettingsWalkingAvoidBusyRoads:(BOOL)roads;
- (void)setHasMapSettingsWalkingAvoidBusyRoads:(BOOL)roads;
- (void)setMapSettingsDirectionsWakeDevice:(BOOL)device;
- (void)setHasMapSettingsDirectionsWakeDevice:(BOOL)device;
- (void)performMapFeaturesStateOperation:(id /* block */)operation;
- (void)performMapUserSettingsStateOperation:(id /* block */)operation;
- (void)performRoutingSettingsStateOperation:(id /* block */)operation;
- (void)periodicSettingsHandler;
- (void)populateSearchResultsForQuery:(id)query searchResultSpecifierBlock:(id /* block */)block;
- (void)populateImpressionObjectId:(id)id;
- (void)populateTapEventForPinType:(int)type tapEventSpecifierBlock:(id /* block */)block;
- (void)populateTapEventForResultIndex:(unsigned int)index resultType:(int)type businessId:(unsigned long long)id localSearchProviderId:(unsigned int)id isEnrichedItem:(BOOL)item;
- (void)populateActionButtonDetails:(id /* block */)details;
- (void)populatePhotoSubmissionDetailsWithEntryPoint:(int)point numberOfPhotos:(unsigned int)photos numberOfARPSuggestedPhotos:(unsigned int)photos originTarget:(id)target;
- (void)populateRatingSubmissionDetailsWithEntryPoint:(int)point originTarget:(id)target specifierBlock:(id /* block */)block;
- (void)populateRatingPhotoSubmissionDetailsWithEntryPoint:(int)point originTarget:(id)target;
- (id)stateMapSettings;
- (id)stateMapSettingsShort;
- (id)stateMapUIShown;
- (id)stateMapsFeatures;
- (id)stateMapsUserSettings;
- (id)stateRoutingSettings;
- (id)stateSearchResults;
- (id)stateImpressionObject;
- (id)stateTapEvents;
- (BOOL)_hasActualUserHomeMetro;
- (BOOL)_hasActualUserHomeCountry;
- (BOOL)_hasActualFallbackData;
- (void)bestUserHomeLocation:(id /* block */)location;
- (id)bestCurrentMetro;
- (id)_metroForLatLng:(id)lng inCountry:(id)country filterWithAllowList:(BOOL)list;
- (id)_filteredHomeCountry:(id)country;
- (void)setCurrentMetro:(id)metro;
- (void)setMeCardHomeCountry:(id)country andHomeLocation:(id)location;
- (BOOL)_isHandoff;
- (BOOL)_isHandoffFromDeviceType:(id)type;
- (BOOL)isIPadHandoff;
- (BOOL)isIPhoneHandoff;
- (BOOL)isWatchHandoff;
- (BOOL)isMacHandoff;
- (void)setMapViewViewMode:(int)mode;
- (BOOL)hasShowcase;
- (BOOL)shouldCountAsEnrichmentResult;
- (BOOL)_isPunchInAppIdInList:(id)list;
- (BOOL)isSiriPunchIn;
- (BOOL)isSafariPunchIn;
- (BOOL)isSpotlightPunchIn;
- (BOOL)isSMSPunchIn;
- (BOOL)isFindMyPunchIn;
- (BOOL)isOther2ndPartyPunchIn;
- (BOOL)is3rdPartyPunchIn;
- (void)populatePlaceIdsWithSpecifierBlock:(id /* block */)block;
@end

#endif /* GEOAPSharedStateData_h */
