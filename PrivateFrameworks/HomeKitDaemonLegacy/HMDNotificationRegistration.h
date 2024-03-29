//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNotificationRegistration_h
#define HMDNotificationRegistration_h
@import Foundation;

#include "HMFObject.h"
#include "HMFLogging-Protocol.h"

@class NSMutableSet, NSString;

@interface HMDNotificationRegistration : HMFObject<HMFLogging>

@property (readonly, nonatomic) NSMutableSet *registeredNotifications;
@property (readonly, weak, nonatomic) NSObject<HMFLogging> *registerer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithRegisterer:(id)registerer;
- (id)logIdentifier;
- (void)addObserver:(SEL)observer name:(id)name object:(id)object;
@end

#endif /* HMDNotificationRegistration_h */
