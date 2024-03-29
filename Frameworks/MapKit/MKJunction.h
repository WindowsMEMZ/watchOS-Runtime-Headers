//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKJunction_h
#define MKJunction_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface MKJunction : NSObject<NSSecureCoding> {
  /* instance variables */
  struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; } x3; } * _elements;
  unsigned long long _count;
  int _maneuver;
  int _drivingSide;
  struct GEOJunctionElement * _snapped[8];
}

@property (readonly, nonatomic) int type;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithJunction:(id)junction;
- (id)initWithType:(int)type maneuver:(int)maneuver drivingSide:(int)side elements:(struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; } x3; } *)elements count:(unsigned long long)count;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (BOOL)willSnapToSharpRight;
- (BOOL)willSnapToRightHandTurn;
- (BOOL)rightOrLeftTurnWillSnapToNinetyDegrees;
- (BOOL)_willSnapToNinetyDegreesForManeuverTypes:(id)types;
- (void)getArrowPath:(id *)path arrowStrokePath:(id *)path intersectionBackgroundPath:(id *)path strokePath:(id *)path withSize:(struct CGSize { double x0; double x1; })size metrics:(struct { BOOL x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; double x10; double x11; long long x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; BOOL x35; double x36; double x37; double x38; double x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; double x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; double x60; double x61; double x62; })metrics drivingSide:(int)side visualCenter:(struct CGPoint { double x0; double x1; } *)center;
- (void)_addJunctionStemCapToPath:(id)path fromStartPoint:(struct CGPoint { double x0; double x1; })point topEndPoint:(struct CGPoint { double x0; double x1; })point cornerRadius:(double)radius;
- (void)getArrowPath:(id *)path arrowStrokePath:(id *)path pivot:(struct CGPoint { double x0; double x1; } *)pivot withSize:(struct CGSize { double x0; double x1; })size metrics:(struct { BOOL x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; double x10; double x11; long long x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; BOOL x35; double x36; double x37; double x38; double x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; double x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; double x60; double x61; double x62; })metrics visualCenter:(struct CGPoint { double x0; double x1; } *)center;
- (id)roundaboutArrowWithSize:(struct CGSize { double x0; double x1; })size metrics:(struct { BOOL x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; double x10; double x11; long long x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; BOOL x35; double x36; double x37; double x38; double x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; double x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; double x60; double x61; double x62; })metrics outerRadius:(double)radius endAngle:(double)angle pivot:(struct CGPoint { double x0; double x1; } *)pivot;
- (void)getRoundaboutArrowPath:(id *)path intersectionBackgroundPath:(id *)path strokePath:(id *)path withSize:(struct CGSize { double x0; double x1; })size metrics:(struct { BOOL x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; double x10; double x11; long long x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; BOOL x35; double x36; double x37; double x38; double x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; double x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; double x60; double x61; double x62; })metrics drivingSide:(int)side visualCenter:(struct CGPoint { double x0; double x1; } *)center;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* MKJunction_h */
