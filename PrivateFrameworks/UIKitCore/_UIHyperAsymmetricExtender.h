//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIHyperAsymmetricExtender_h
#define _UIHyperAsymmetricExtender_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_UIHyperExtender-Protocol.h"
#include "_UIHyperExtender_Internal-Protocol.h"

@class NSString;

@interface _UIHyperAsymmetricExtender : NSObject<_UIHyperExtender_Internal, _UIHyperExtender, NSSecureCoding, NSCopying> {
  /* instance variables */
  double * __temp;
}

@property (readonly, nonatomic) const double * _extentBeyondMinimum;
@property (readonly, nonatomic) const double * _extentBeyondMaximum;
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
- (void)_mutateExtentBeyondMinimum:(id /* block */)minimum;
- (void)_mutateExtentBeyondMaximum:(id /* block */)maximum;
- (void)_getExtentVector:(double *)vector forUnconstrainedPoint:(const double *)point closestPoint:(const double *)point;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* _UIHyperAsymmetricExtender_h */
