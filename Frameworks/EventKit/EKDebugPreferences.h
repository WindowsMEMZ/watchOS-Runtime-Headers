//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKDebugPreferences_h
#define EKDebugPreferences_h
@import Foundation;

@class CalPreferences, NSString;

@interface EKDebugPreferences : NSObject {
  /* instance variables */
  CalPreferences *_preferences;
}

@property (nonatomic) double availabilityFreshnessWindow;
@property (nonatomic) BOOL overrideTravelAdvisoryHypothesis;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTransportType;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisConservativeTravelTime;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisAggressiveTravelTime;
@property (nonatomic) BOOL overriddenTravelAdvisoryHypothesisSupportsLiveTraffic;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisRouteName;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTravelState;
@property (nonatomic) BOOL preventMarkingTravelAdvisoryEntriesAsDismissed;
@property (nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;
@property (nonatomic) BOOL saveGeocodedLocationsInTravelEngine;
@property (nonatomic) BOOL performAgendaEntryEqualityChecksInTravelEngine;
@property (nonatomic) BOOL verifyIntegrityOfAvailabilityTimeSearchTimelines;
@property (nonatomic) BOOL showDepartureDateForTransitTimeToLeave;
@property (nonatomic) BOOL shouldBypassTravelEngineThrottle;
@property (nonatomic) BOOL syntheticTravelAdvisoriesEnabled;

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
@end

#endif /* EKDebugPreferences_h */
