//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 417.0.4.0.0
//
#ifndef PRGetPowerStatsResponse_h
#define PRGetPowerStatsResponse_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface PRGetPowerStatsResponse : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) unsigned int sleepDuration;
@property (readonly, nonatomic) unsigned int wakeDuration;
@property (readonly, nonatomic) unsigned int singleAntennaSearchDuration;
@property (readonly, nonatomic) unsigned int dualAntennaSearchDuration;
@property (readonly, nonatomic) unsigned int singleChainRxPacketDuration;
@property (readonly, nonatomic) unsigned int dualChainRxPacketDuration;
@property (readonly, nonatomic) unsigned int tripleChainRxPacketDuration;
@property (readonly, nonatomic) unsigned int dspProcessingDuration;
@property (readonly, nonatomic) unsigned int txDuration;
@property (readonly, nonatomic) unsigned short numPacketsReceived;
@property (readonly, nonatomic) unsigned short numPacketsTransmitted;
@property (readonly, nonatomic) unsigned int sleepCount;
@property (readonly, nonatomic) unsigned int wakeCount;
@property (readonly, nonatomic) unsigned int pmgrSleepCount;
@property (readonly, nonatomic) unsigned int pmgrDeepSleepCount;
@property (readonly, nonatomic) unsigned int deepSleepDuration;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSleepDuration:(unsigned int)duration wakeDuration:(unsigned int)duration singleAntennaSearchDuration:(unsigned int)duration dualAntennaSearchDuration:(unsigned int)duration singleChainRxPacketDuration:(unsigned int)duration dualChainRxPacketDuration:(unsigned int)duration tripleChainRxPacketDuration:(unsigned int)duration dspProcessingDuration:(unsigned int)duration txDuration:(unsigned int)duration numPacketsReceived:(unsigned short)received numPacketsTransmitted:(unsigned short)transmitted sleepCount:(unsigned int)count wakeCount:(unsigned int)count pmgrSleepCount:(unsigned int)count pmgrDeepSleepCount:(unsigned int)count deepSleepDuration:(unsigned int)duration;
- (id)initWithGetPowerStatsResponse:(const struct PowerStatsResponse { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned short x9; unsigned short x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)response;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isEqual:(id)equal;
@end

#endif /* PRGetPowerStatsResponse_h */
