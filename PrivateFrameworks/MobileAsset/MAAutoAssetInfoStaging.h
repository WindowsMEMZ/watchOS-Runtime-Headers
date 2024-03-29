//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAAutoAssetInfoStaging_h
#define MAAutoAssetInfoStaging_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface MAAutoAssetInfoStaging : NSObject<NSSecureCoding>

@property (readonly, retain, nonatomic) NSDictionary *allAvailableForStagingAttributes;
@property (readonly, nonatomic) unsigned long long totalExpectedBytes;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAvailableForStaging:(id)staging withTotalExpectedBytes:(unsigned long long)bytes;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)summary;
@end

#endif /* MAAutoAssetInfoStaging_h */
