//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTUnvalidatedEdgeInfo_h
#define _LTUnvalidatedEdgeInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface _LTUnvalidatedEdgeInfo : NSObject<NSCopying>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long targetPhraseIndex;
@property (readonly, nonatomic) unsigned long long targetLinkIndex;
@property (readonly, nonatomic) NSNumber *targetGender;
@property (readonly, nonatomic) NSNumber *defaultGender;
@property (readonly, copy, nonatomic) NSString *meaningDescription;

/* class methods */
+ (id)meaningEdgeInfoWithTargetPhraseIndex:(unsigned long long)index targetLinkIndex:(unsigned long long)index meaningDescription:(id)description;
+ (id)genderEdgeInfoWithTargetPhraseIndex:(unsigned long long)index targetLinkIndex:(unsigned long long)index gender:(unsigned long long)gender defaultGender:(unsigned long long)gender;

/* instance methods */
- (id)_initWithTargetPhraseIndex:(unsigned long long)index targetLinkIndex:(unsigned long long)index type:(unsigned long long)type meaningDescription:(id)description gender:(id)gender defaultGender:(id)gender;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _LTUnvalidatedEdgeInfo_h */
