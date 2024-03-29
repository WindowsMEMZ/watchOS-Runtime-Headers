//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef TWRLocalZoomOptions_h
#define TWRLocalZoomOptions_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class BKSAnimationFenceHandle;

@interface TWRLocalZoomOptions : NSObject<NSSecureCoding>

@property (nonatomic) double startLevel;
@property (nonatomic) double endLevel;
@property (nonatomic) double naturalFrequency;
@property (retain, nonatomic) BKSAnimationFenceHandle *fence;
@property (nonatomic) unsigned int slotID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TWRLocalZoomOptions_h */
