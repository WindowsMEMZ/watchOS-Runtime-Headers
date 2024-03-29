//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNKeyedArchiver_h
#define SCNKeyedArchiver_h
@import Foundation;

#include "NSKeyedArchiver.h"

@class NSDictionary;

@interface SCNKeyedArchiver : NSKeyedArchiver

@property (nonatomic) BOOL skipMorphTargets;
@property (copy, nonatomic) NSDictionary *options;

/* class methods */
+ (id)archivedDataWithRootObject:(id)object options:(id)options;

/* instance methods */
- (void)dealloc;
@end

#endif /* SCNKeyedArchiver_h */
