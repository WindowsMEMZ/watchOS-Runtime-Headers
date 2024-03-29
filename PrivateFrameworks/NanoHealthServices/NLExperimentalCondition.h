//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLExperimentalCondition_h
#define NLExperimentalCondition_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface NLExperimentalCondition : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *experimentIdentifier;
@property (readonly, nonatomic) long long testCondition;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithExperimentIdentifier:(id)identifier testCondition:(long long)condition;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)shouldDelayNotificationsUntilSettled;
- (id)generateSedentaryAlertExperimentInstance;
- (id)generateDailyProgressAlertExperimentInstance;
@end

#endif /* NLExperimentalCondition_h */
