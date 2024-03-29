//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAAutoAssetSetProgress_h
#define MAAutoAssetSetProgress_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface MAAutoAssetSetProgress : NSObject<NSSecureCoding>

@property (nonatomic) long long downloadedAssetCount;
@property (nonatomic) long long remainingAssetCount;
@property (nonatomic) long long totalExpectedBytes;
@property (nonatomic) long long totalWrittenBytes;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) double expectedTimeRemainingSecs;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copy;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)summary;
@end

#endif /* MAAutoAssetSetProgress_h */
