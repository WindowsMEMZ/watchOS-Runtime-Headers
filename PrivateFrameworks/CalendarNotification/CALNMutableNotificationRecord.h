//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNMutableNotificationRecord_h
#define CALNMutableNotificationRecord_h
@import Foundation;

#include "CALNNotificationRecord.h"
#include "CALNNotificationContent.h"
#include "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface CALNMutableNotificationRecord : CALNNotificationRecord<NSCopying>

@property (copy, @dynamic, nonatomic) NSString *sourceIdentifier;
@property (copy, @dynamic, nonatomic) NSString *sourceClientIdentifier;
@property (copy, @dynamic, nonatomic) CALNNotificationContent *content;
@property (copy, @dynamic, nonatomic) NSDate *date;
@property (@dynamic, nonatomic) BOOL shouldPresentAlert;
@property (@dynamic, nonatomic) BOOL shouldPlaySound;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CALNMutableNotificationRecord_h */
