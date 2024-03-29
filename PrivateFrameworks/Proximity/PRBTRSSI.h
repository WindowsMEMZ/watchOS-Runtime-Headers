//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 417.0.4.0.0
//
#ifndef PRBTRSSI_h
#define PRBTRSSI_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface PRBTRSSI : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) int rssi_dbm;
@property (readonly, nonatomic) int channel;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTimeStamp:(double)stamp rssi_dbm:(int)rssi_dbm channel:(int)channel;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PRBTRSSI_h */
