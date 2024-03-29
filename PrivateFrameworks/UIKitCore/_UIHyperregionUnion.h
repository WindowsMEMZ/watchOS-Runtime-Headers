//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIHyperregionUnion_h
#define _UIHyperregionUnion_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_UIHyperregion-Protocol.h"
#include "_UIHyperregion_Internal-Protocol.h"

@class NSArray, NSString;

@interface _UIHyperregionUnion : NSObject<_UIHyperregion_Internal, _UIHyperregion, NSSecureCoding, NSCopying>

@property (readonly, nonatomic) double * _temp;
@property (copy, nonatomic) NSArray *_regions;
@property (readonly, nonatomic) unsigned long long _dimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingSelf;

/* instance methods */
- (id)initWithDimensions:(unsigned long long)dimensions;
- (void)dealloc;
- (void)_setRegions:(id)regions;
- (void)_closestPoint:(double *)point toPoint:(const double *)point;
- (unsigned long long)_regionIndexForClosestPoint:(double *)point toPoint:(const double *)point;
- (BOOL)_isBoundaryCrossedFromPoint:(const double *)point toPoint:(const double *)point;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* _UIHyperregionUnion_h */
