//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TINameReadingPair_h
#define TINameReadingPair_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface TINameReadingPair : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *reading;

/* class methods */
+ (id)nameReadingPairWithName:(id)name reading:(id)reading;

/* instance methods */
- (id)initWithName:(id)name reading:(id)reading;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* TINameReadingPair_h */
