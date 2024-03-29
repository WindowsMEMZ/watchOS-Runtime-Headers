//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNUNNotificationResponseMapper_h
#define CALNUNNotificationResponseMapper_h
@import Foundation;

#include "CALNUNNotificationMapper.h"

@interface CALNUNNotificationResponseMapper : NSObject

@property (readonly, nonatomic) CALNUNNotificationMapper *notificationMapper;

/* class methods */
+ (id)_calnNotificationActionIdentifierFromUNNotificationActionIdentifier:(id)identifier;

/* instance methods */
- (id)initWithNotificationMapper:(id)mapper;
- (id)calnNotificationResponseFromUNNotificationResponse:(id)response;
@end

#endif /* CALNUNNotificationResponseMapper_h */
