//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef _IMPingPacketData_h
#define _IMPingPacketData_h
@import Foundation;

@interface _IMPingPacketData : NSObject

@property (readonly, nonatomic) int sequenceNumber;
@property (readonly, nonatomic) BOOL timedOut;
@property (readonly, nonatomic) struct timeval { long long x0; int x1; } timeSent;
@property (readonly, nonatomic) int error;
@property (readonly, nonatomic) double rtt;

/* instance methods */
- (id)initWithSequeneceNumber:(int)number timesent:(struct timeval { long long x0; int x1; } *)timesent error:(int)error;
- (void)_markPacketAsTimedOut:(double)out;
- (void)_returnPacketArrived;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _IMPingPacketData_h */
