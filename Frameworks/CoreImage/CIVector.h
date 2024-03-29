//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIVector_h
#define CIVector_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CIVector : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  union { double x[4] vec; double *ptr; } _u;
}

@property (readonly) double * _values;
@property (readonly) unsigned long long count;
@property (readonly) double X;
@property (readonly) double Y;
@property (readonly) double Z;
@property (readonly) double W;
@property (readonly) struct CGPoint { double x0; double x1; } CGPointValue;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } CGRectValue;
@property (readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } CGAffineTransformValue;
@property (readonly) NSString *stringRepresentation;

/* class methods */
+ (id)vectorWithValues:(const double *)values count:(unsigned long long)count;
+ (id)vectorWithX:(double)x;
+ (id)vectorWithX:(double)x Y:(double)y;
+ (id)vectorWithX:(double)x Y:(double)y Z:(double)z;
+ (id)vectorWithX:(double)x Y:(double)y Z:(double)z W:(double)w;
+ (id)vectorWithCGPoint:(struct CGPoint { double x0; double x1; })cgpoint;
+ (id)vectorWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cgrect;
+ (id)vectorWithCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
+ (id)vectorWithString:(id)string;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (float)_norm;
- (id)_orthonormalizeTo:(id)to;
- (float)_dot:(id)_dot;
- (id)init;
- (id)initWithX:(double)x;
- (id)initWithX:(double)x Y:(double)y;
- (id)initWithX:(double)x Y:(double)y Z:(double)z;
- (id)initWithX:(double)x Y:(double)y Z:(double)z W:(double)w;
- (id)initWithCGPoint:(struct CGPoint { double x0; double x1; })cgpoint;
- (id)initWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cgrect;
- (id)initWithCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (id)initWithValues:(const double *)values count:(unsigned long long)count;
- (id)initWithString:(id)string;
- (void)dealloc;
- (double)valueAtIndex:(unsigned long long)index;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CIVector_h */
