//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPSettingsGuardedData_h
#define PPSettingsGuardedData_h
@import Foundation;

@class NSData, NSDate, NSMutableDictionary, NSSet, NSString;

@interface PPSettingsGuardedData : NSObject {
  /* instance variables */
  double _cachedWeightMultiplier;
  NSSet *_donationDisabledBundleIdentifiers;
  NSSet *_cloudKitDisabledBundleIdentifiers;
  NSMutableDictionary *_donationDisabledChangeHandlers;
  NSMutableDictionary *_queryPlanLoggingChangeHandlers;
  int _nextChangeHandlerToken;
  BOOL _appConnectionsLocationsEnabled;
  NSDate *_entitiesBackfillTimestamp;
  NSData *_entitiesMappingTrieSha256;
  NSString *_abGroupOverride;
}

/* instance methods */
@end

#endif /* PPSettingsGuardedData_h */
