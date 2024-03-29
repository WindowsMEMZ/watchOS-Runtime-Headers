//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKFitnessMachine_h
#define _HKFitnessMachine_h
@import Foundation;

#include "HKDevice.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString, NSUUID;

@interface _HKFitnessMachine : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) HKDevice *device;
@property (readonly, nonatomic) NSString *brand;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithType:(unsigned long long)type identifier:(id)identifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (void)_setActivityType:(unsigned long long)type;
- (void)_setDevice:(id)device;
- (void)_setBrand:(id)brand;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _HKFitnessMachine_h */
