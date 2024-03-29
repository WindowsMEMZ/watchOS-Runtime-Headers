//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDEventCountersPersistentStore_h
#define HMDEventCountersPersistentStore_h
@import Foundation;

#include "HMDEventCountersStoring-Protocol.h"
#include "HMDPersistentStore-Protocol.h"

@interface HMDEventCountersPersistentStore : NSObject<HMDEventCountersStoring>

@property (readonly, weak, nonatomic) NSObject<HMDPersistentStore> *persistentStore;

/* instance methods */
- (id)initWithPersistentStore:(id)store;
- (void)archiveDictionary:(id)dictionary;
- (id)unarchive;
@end

#endif /* HMDEventCountersPersistentStore_h */
