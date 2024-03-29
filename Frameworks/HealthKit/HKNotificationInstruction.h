//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKNotificationInstruction_h
#define HKNotificationInstruction_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface HKNotificationInstruction : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) long long action;
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (readonly, copy, nonatomic) NSDate *expirationDate;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAction:(long long)action categoryIdentifier:(id)identifier expirationDate:(id)date;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HKNotificationInstruction_h */
