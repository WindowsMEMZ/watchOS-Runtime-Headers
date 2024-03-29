//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIShape_h
#define _UIShape_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "UIBezierPath.h"

@class NSString;

@interface _UIShape : NSObject<NSCopying>

@property (readonly, nonatomic) UIBezierPath *path;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) NSString *cornerCurve;
@property (readonly, nonatomic) unsigned long long cornerMask;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) BOOL isRect;
@property (readonly, nonatomic) UIBezierPath *outline;
@property (readonly, nonatomic) _UIShape *zeroOriginShape;

/* class methods */
+ (id)shapeWithPath:(id)path;
+ (id)shapeWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect cornerRadius:(double)radius cornerCurve:(id)curve;
+ (id)shapeWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect cornerRadius:(double)radius cornerCurve:(id)curve cornerMask:(unsigned long long)mask;

/* instance methods */
- (id)shapeConvertedFromCoordinateSpace:(id)space toCoordinateSpace:(id)space;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* _UIShape_h */
