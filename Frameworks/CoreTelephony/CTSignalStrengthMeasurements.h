//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTSignalStrengthMeasurements_h
#define CTSignalStrengthMeasurements_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber;

@interface CTSignalStrengthMeasurements : NSObject<NSCopying, NSSecureCoding>

@property (retain, nonatomic) NSNumber *rssi;
@property (retain, nonatomic) NSNumber *rscp;
@property (retain, nonatomic) NSNumber *ecn0;
@property (retain, nonatomic) NSNumber *rsrp;
@property (retain, nonatomic) NSNumber *rsrq;
@property (retain, nonatomic) NSNumber *snr;
@property (retain, nonatomic) NSNumber *ecio;
@property (retain, nonatomic) NSNumber *rxagc;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CTSignalStrengthMeasurements_h */
