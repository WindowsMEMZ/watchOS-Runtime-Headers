//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKIdentityExtendedReviewUserNotification_h
#define NPKIdentityExtendedReviewUserNotification_h
@import Foundation;

#include "NPKUserNotification.h"

@class NSString;

@interface NPKIdentityExtendedReviewUserNotification : NPKUserNotification

@property (readonly, nonatomic) unsigned long long notificationType;
@property (readonly, nonatomic) unsigned long long documentType;
@property (readonly, nonatomic) NSString *issuerName;

/* instance methods */
- (id)initWithNotificationType:(unsigned long long)type documentType:(unsigned long long)type issuerName:(id)name;
- (id)title;
- (id)body;
- (id)identifierHashComponents;
@end

#endif /* NPKIdentityExtendedReviewUserNotification_h */
