//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKCustomWorldCityAbbreviationsStore_h
#define NTKCustomWorldCityAbbreviationsStore_h
@import Foundation;

@class NPSManager;

@interface NTKCustomWorldCityAbbreviationsStore : NSObject {
  /* instance variables */
  NPSManager *_npsManager;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)_getCustomAbbreviationsFromPrefs;
- (id)customAbbreviations;
- (void)setCustomAbbreviation:(id)abbreviation forCityIdentifier:(id)identifier;
- (void)_handlePrefsChanged;
- (void)_notifyClientsOfChange;
@end

#endif /* NTKCustomWorldCityAbbreviationsStore_h */
