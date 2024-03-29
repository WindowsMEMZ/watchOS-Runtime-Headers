//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNGuidanceJunctionViewImage_h
#define MNGuidanceJunctionViewImage_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData;

@interface MNGuidanceJunctionViewImage : NSObject<NSSecureCoding>

@property (readonly, nonatomic) unsigned long long imageID;
@property (readonly, nonatomic) NSData *imageData;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* MNGuidanceJunctionViewImage_h */
