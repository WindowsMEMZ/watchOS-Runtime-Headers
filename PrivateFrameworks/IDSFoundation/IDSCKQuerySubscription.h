//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSCKQuerySubscription_h
#define IDSCKQuerySubscription_h
@import Foundation;

#include "IDSCKSubscription.h"
#include "IDSCKNotificationInfo.h"

@interface IDSCKQuerySubscription : IDSCKSubscription

@property (copy, nonatomic) IDSCKNotificationInfo *notificationInfo;

/* class methods */
+ (Class)__class;
+ (id)alloc;

/* instance methods */
@end

#endif /* IDSCKQuerySubscription_h */
