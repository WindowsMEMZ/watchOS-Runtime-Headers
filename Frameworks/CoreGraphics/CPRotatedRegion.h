//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.2.3.0.0
//
#ifndef CPRotatedRegion_h
#define CPRotatedRegion_h
@import Foundation;

#include "CPRegion.h"

@interface CPRotatedRegion : CPRegion {
  /* instance variables */
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedBounds;
  BOOL dirtyNormalizedBounds;
}

/* instance methods */
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedBounds;
- (struct CGPoint { double x0; double x1; })anchor;
- (double)left;
- (double)right;
- (double)center;
- (double)top;
- (double)bottom;
- (void)fitBoundsToChildren;
- (void)resizeWith:(id)with;
@end

#endif /* CPRotatedRegion_h */
