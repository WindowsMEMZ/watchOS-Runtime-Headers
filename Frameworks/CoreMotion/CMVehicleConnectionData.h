//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMVehicleConnectionData_h
#define CMVehicleConnectionData_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate;

@interface CMVehicleConnectionData : NSObject<NSSecureCoding, NSCopying> {
  /* instance variables */
  NSDate *fStartDate;
  NSDate *fEndDate;
}

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithStartDate:(double)date endDate:(double)date;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* CMVehicleConnectionData_h */
