//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMOdometry_h
#define CMOdometry_h
@import Foundation;

#include "CMLogItem.h"

@class NSNumber;

@interface CMOdometry : CMLogItem

@property (readonly, nonatomic) NSNumber *deltaPositionX;
@property (readonly, nonatomic) NSNumber *deltaPositionY;
@property (readonly, nonatomic) NSNumber *deltaPositionZ;
@property (readonly, nonatomic) NSNumber *deltaVelocityX;
@property (readonly, nonatomic) NSNumber *deltaVelocityY;
@property (readonly, nonatomic) NSNumber *deltaVelocityZ;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDeltaPositionX:(id)x deltaPositionY:(id)y deltaPositionZ:(id)z deltaVelocityX:(id)x deltaVelocityY:(id)y deltaVelocityZ:(id)z timestamp:(double)timestamp;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* CMOdometry_h */
