//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 40.0.3.0.0
//
#ifndef PKRegion_h
#define PKRegion_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@protocol {shared_ptr<PKCPathHolder>="__ptr_"^{PKCPathHolder}"__cntrl_"^{__shared_weak_count}};

@interface PKRegion : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  int _shape;
  BOOL _isExclusive;
  struct vec4 {  } _halfExtent;
  int _regionOp;
  int _shape2;
  struct vec4 {  } _halfExtent2;
  struct shared_ptr<PKCPathHolder> { struct PKCPathHolder *__ptr_; struct __shared_weak_count *__cntrl_; } _path2;
}

@property (readonly, nonatomic) struct CGPath * path;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)infiniteRegion;

/* instance methods */
- (BOOL)isEqualToRegion:(id)region;
- (BOOL)isInfinite;
- (BOOL)isEmpty;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithRadius:(float)radius;
- (id)initWithSize:(struct CGSize { double x0; double x1; })size;
- (id)initWithPath:(struct CGPath *)path;
- (id)inverseRegion;
- (id)regionByUnionWithRegion:(id)region;
- (id)regionByDifferenceFromRegion:(id)region;
- (id)regionByIntersectionWithRegion:(id)region;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })point;
- (void)containsPoints:(const float *)points locationStride:(long long)stride results:(char *)results resultsStride:(long long)stride count:(int)count;
@end

#endif /* PKRegion_h */
