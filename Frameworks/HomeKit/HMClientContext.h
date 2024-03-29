//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMClientContext_h
#define HMClientContext_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSString;

@interface HMClientContext : NSObject<NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSString *metricIdentifier;

/* instance methods */
- (id)initWithMetricIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMClientContext_h */
