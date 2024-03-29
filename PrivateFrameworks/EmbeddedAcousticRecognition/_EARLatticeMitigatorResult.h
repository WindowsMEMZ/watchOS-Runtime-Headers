//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef _EARLatticeMitigatorResult_h
#define _EARLatticeMitigatorResult_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface _EARLatticeMitigatorResult : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) float threshold;
@property (readonly, nonatomic) float calibrationScale;
@property (readonly, nonatomic) float calibrationOffset;

/* instance methods */
- (id)initWithVersion:(id)version score:(float)score threshold:(float)threshold calibrationScale:(float)scale calibrationOffset:(float)offset;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* _EARLatticeMitigatorResult_h */
