//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKBeacon_h
#define PKBeacon_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString, NSUUID;

@interface PKBeacon : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSUUID *proximityUUID;
@property (retain, nonatomic) NSNumber *major;
@property (retain, nonatomic) NSNumber *minor;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *relevantText;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)setProximityUUIDWithString:(id)string;
- (id)proximityUUIDAsString;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKBeacon_h */
