//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDowntimeModel_h
#define CSLDowntimeModel_h
@import Foundation;

@class NSHashTable, NSMutableArray;

@interface CSLDowntimeModel : NSObject {
  /* instance variables */
  NSMutableArray *_cslhsamoTokens;
  BOOL _downtimeEnabled;
  NSHashTable *_stateObservers;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (BOOL)isDowntimeEnabled;
- (id)_init;
- (void)_didUpdateApplications:(id)applications;
- (BOOL)_isDowntimeEnabled;
- (void)addStateObserver:(id)observer;
- (void)removeStateObserver:(id)observer;
@end

#endif /* CSLDowntimeModel_h */
