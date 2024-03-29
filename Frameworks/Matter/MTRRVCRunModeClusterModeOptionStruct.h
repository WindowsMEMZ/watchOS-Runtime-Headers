//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRRVCRunModeClusterModeOptionStruct_h
#define MTRRVCRunModeClusterModeOptionStruct_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface MTRRVCRunModeClusterModeOptionStruct : NSObject<NSCopying>

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *mode;
@property (copy, nonatomic) NSArray *modeTags;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* MTRRVCRunModeClusterModeOptionStruct_h */
