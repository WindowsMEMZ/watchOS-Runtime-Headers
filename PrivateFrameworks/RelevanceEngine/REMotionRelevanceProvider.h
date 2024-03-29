//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REMotionRelevanceProvider_h
#define REMotionRelevanceProvider_h
@import Foundation;

#include "RERelevanceProvider.h"

@interface REMotionRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) unsigned long long motionTypes;

/* class methods */
+ (id)relevanceSimulatorID;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)dictionaryEncoding;
- (id)initWithMotionTypes:(unsigned long long)types;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)_hash;
- (id)description;
@end

#endif /* REMotionRelevanceProvider_h */
