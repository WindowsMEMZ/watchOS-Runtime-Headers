//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNMutableNotificationSound_h
#define CALNMutableNotificationSound_h
@import Foundation;

#include "CALNNotificationSound.h"

@class NSString;

@interface CALNMutableNotificationSound : CALNNotificationSound

@property (copy, @dynamic, nonatomic) NSString *alertTopic;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CALNMutableNotificationSound_h */
