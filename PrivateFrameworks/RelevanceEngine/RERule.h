//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef RERule_h
#define RERule_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface RERule : NSObject<NSCopying>

@property (nonatomic) float priority;

/* instance methods */
- (id)init;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* RERule_h */
