//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassRelevancyDates_h
#define PKPassRelevancyDates_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate;

@interface PKPassRelevancyDates : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSDate *effectiveStartDate;
@property (copy, nonatomic) NSDate *effectiveEndDate;
@property (copy, nonatomic) NSDate *relevantDate;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithEffectiveStartDate:(id)date effectiveEndDate:(id)date;
- (id)initWithRelevantDate:(id)date;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKPassRelevancyDates_h */
