//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPBeaconLocation_h
#define SPBeaconLocation_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface SPBeaconLocation : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSString *source;
@property (readonly, nonatomic) double horizontalAccuracy;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithTimestamp:(id)timestamp latitude:(double)latitude longitude:(double)longitude horizontalAccuracy:(double)accuracy source:(id)source;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)debugDescription;
@end

#endif /* SPBeaconLocation_h */
