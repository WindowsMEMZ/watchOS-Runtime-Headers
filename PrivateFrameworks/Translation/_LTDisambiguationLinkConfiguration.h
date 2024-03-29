//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTDisambiguationLinkConfiguration_h
#define _LTDisambiguationLinkConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSNumber, NSSet;

@interface _LTDisambiguationLinkConfiguration : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSArray *unvalidatedAdjacencyList;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } sourceRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } targetRange;
@property (readonly, nonatomic) NSArray *adjacencyList;
@property (readonly, nonatomic) NSNumber *gender;
@property (readonly, nonatomic) NSNumber *defaultGender;
@property (readonly, nonatomic) NSSet *edgeTypes;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range targetRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range adjacencyList:(id)list gender:(id)gender defaultGender:(id)gender;
- (id)initWithSourceText:(id)text sourceSnippet:(id)snippet targetText:(id)text targetSnippet:(id)snippet adjacencyList:(id)list gender:(id)gender defaultGender:(id)gender;
- (id)initWithSourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range targetRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range unvalidatedAdjacencyList:(id)list;
- (id)initWithSourceText:(id)text sourceSnippet:(id)snippet targetText:(id)text targetSnippet:(id)snippet unvalidatedAdjacencyList:(id)list;
- (void)_validateWithAdjacencyList:(id)list gender:(id)gender defaultGender:(id)gender;
- (void)_finishValidating;
- (id)_unvalidatedEdgeFromAdjacencyListMatchingTargetNodeIndex:(unsigned long long)index;
- (void)_insertPrefix:(id)prefix;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _LTDisambiguationLinkConfiguration_h */
