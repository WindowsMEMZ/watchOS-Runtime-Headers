//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.1.16.0.0
//
#ifndef RBDisplayListTransform_h
#define RBDisplayListTransform_h
@import Foundation;

#include "NSCopying-Protocol.h"

@protocol {DisplayListTransform="_terms"{vector<RB::DisplayListTransform::Term, 1UL, unsigned int>="_p"[24C]"_p"^{Term}"_size"I"_capacity"I}};

@interface RBDisplayListTransform : NSObject<NSCopying> {
  /* instance variables */
  struct DisplayListTransform { struct vector<RB::DisplayListTransform::Term, 1UL, unsigned int> { unsigned char x[24] _p; struct Term *_p; unsigned int _size; unsigned int _capacity; } _terms; } _transform;
}

/* class methods */
+ (id)transform;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)removeAll;
- (void)addColorReplacementFrom:(struct { float x0; float x1; float x2; float x3; })from to:(struct { float x0; float x1; float x2; float x3; })to colorSpace:(int)space;
- (void)addColorReplacementTo:(struct { float x0; float x1; float x2; float x3; })to colorSpace:(int)space;
- (void)applyToDisplayList:(id)list;
- (id)applyingToDisplayList:(id)list;
@end

#endif /* RBDisplayListTransform_h */
