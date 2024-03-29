//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassLibrarySyncState_h
#define NPKPassLibrarySyncState_h
@import Foundation;

@class NSDictionary;

@interface NPKPassLibrarySyncState : NSObject {
  /* instance variables */
  NSDictionary *_syncStates;
}

/* class methods */
+ (BOOL)_shouldAddPass:(id)pass withDeviceIsTinker:(BOOL)tinker supportHealthPass:(BOOL)pass stateVersion:(unsigned long long)version;

/* instance methods */
- (id)updateReconcileState:(id)state expectedVersion:(unsigned long long)version;
- (id)initWithStateVersionSyncStates:(id)states;
- (id)initWithPasses:(id)passes device:(id)device;
- (id)passSyncStateWithVersion:(unsigned long long)version;
- (id)mergeWithPassLibrarySyncState:(id)state;
@end

#endif /* NPKPassLibrarySyncState_h */
