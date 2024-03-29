//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STVersionVectorNode_h
#define STVersionVectorNode_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface STVersionVectorNode : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)initWithDictionaryRepresentation:(id)representation;
- (void)increment;
- (void)join:(id)join;
- (long long)compare:(id)compare;
- (id)description;
- (id)debugDescription;
- (BOOL)isEqualToNode:(id)node;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* STVersionVectorNode_h */
