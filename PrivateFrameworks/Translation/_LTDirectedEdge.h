//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTDirectedEdge_h
#define _LTDirectedEdge_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface _LTDirectedEdge : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) unsigned long long targetPhraseIndex;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *targetPreview;
@property (readonly, nonatomic) NSNumber *targetGender;
@property (readonly, nonatomic) NSNumber *defaultGender;
@property (readonly, nonatomic) NSString *menuDescription;

/* class methods */
+ (id)meaningEdgeWithTargetPhraseIndex:(unsigned long long)index targetPreview:(id)preview meaningDescription:(id)description targetGender:(id)gender defaultGender:(id)gender;
+ (id)genderEdgeWithTargetPhraseIndex:(unsigned long long)index targetPreview:(id)preview gender:(unsigned long long)gender defaultGender:(unsigned long long)gender;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithTargetPhraseIndex:(unsigned long long)index type:(unsigned long long)type targetPreview:(id)preview targetGender:(id)gender defaultGender:(id)gender menuDescription:(id)description;
- (long long)compare:(id)compare;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _LTDirectedEdge_h */
