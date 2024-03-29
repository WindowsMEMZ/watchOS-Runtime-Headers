//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 949.0.0.0.0
//
#ifndef NWKRoutineLocation_h
#define NWKRoutineLocation_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "NWKLocation.h"
#include "NWKRoutineDateInterval.h"

@interface NWKRoutineLocation : NSObject<NSSecureCoding, NSCopying>

@property (retain, nonatomic) NWKLocation *location;
@property (retain, nonatomic) NWKRoutineDateInterval *interval;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithLocation:(id)location entryDate:(id)date exitDate:(id)date;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToRoutineLocation:(id)location;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* NWKRoutineLocation_h */
