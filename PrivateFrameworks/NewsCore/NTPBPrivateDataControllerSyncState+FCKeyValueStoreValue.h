//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBPrivateDataControllerSyncState_FCKeyValueStoreValue_h
#define NTPBPrivateDataControllerSyncState_FCKeyValueStoreValue_h
@import Foundation;

@interface NTPBPrivateDataControllerSyncState (FCKeyValueStoreValue) <FCKeyValueStoreCoding>
/* class methods */
+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)pair;

/* instance methods */
- (void)writeToKeyValuePair:(id)pair;
@end

#endif /* NTPBPrivateDataControllerSyncState_FCKeyValueStoreValue_h */
