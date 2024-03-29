//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDPendingNotificationInstructions_h
#define HDPendingNotificationInstructions_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSSet;

@interface HDPendingNotificationInstructions : NSObject<NSCopying>

@property (readonly, nonatomic) long long action;
@property (readonly, copy, nonatomic) NSSet *instructions;
@property (readonly, copy, nonatomic) NSSet *messageIdentifiers;
@property (readonly, copy, nonatomic) NSSet *categoryIdentifiers;

/* instance methods */
- (id)initWithAction:(long long)action instructions:(id)instructions;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HDPendingNotificationInstructions_h */
