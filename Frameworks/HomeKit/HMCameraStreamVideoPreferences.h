//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMCameraStreamVideoPreferences_h
#define HMCameraStreamVideoPreferences_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSSet;

@interface HMCameraStreamVideoPreferences : NSObject<NSSecureCoding>

@property (copy) NSSet *resolutions;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* HMCameraStreamVideoPreferences_h */
