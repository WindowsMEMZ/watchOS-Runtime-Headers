//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAWebVideoResult_h
#define SAWebVideoResult_h
@import Foundation;

#include "SAWebImageResult.h"

@class NSNumber;

@interface SAWebVideoResult : SAWebImageResult

@property (copy, nonatomic) NSNumber *runTimeInMilliseconds;

/* class methods */
+ (id)videoResult;
+ (id)videoResultWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAWebVideoResult_h */
