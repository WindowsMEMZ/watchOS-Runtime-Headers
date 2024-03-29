//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef ICClearOnNotificationLRUCache_h
#define ICClearOnNotificationLRUCache_h
@import Foundation;

#include "ICAtomicLRUCache.h"
#include "NSObject-Protocol.h"

@interface ICClearOnNotificationLRUCache : ICAtomicLRUCache

@property (retain, nonatomic) NSObject<NSObject> *notificationToken;

/* instance methods */
- (id)initWithMaxSize:(unsigned long long)size notificationName:(id)name;
- (void)dealloc;
@end

#endif /* ICClearOnNotificationLRUCache_h */
