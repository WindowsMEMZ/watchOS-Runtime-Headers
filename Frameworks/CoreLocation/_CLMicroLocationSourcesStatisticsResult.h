//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef _CLMicroLocationSourcesStatisticsResult_h
#define _CLMicroLocationSourcesStatisticsResult_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface _CLMicroLocationSourcesStatisticsResult : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSArray *sourcesData;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSourcesData:(id)data;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* _CLMicroLocationSourcesStatisticsResult_h */
