//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionCompositionalLayoutSolverUpdate_h
#define _UICollectionCompositionalLayoutSolverUpdate_h
@import Foundation;

#include "_UICollectionViewUpdateTranslating-Protocol.h"
#include "_UIDataSourceSnapshotter.h"

@class NSArray;

@interface _UICollectionCompositionalLayoutSolverUpdate : NSObject {
  /* instance variables */
  NSArray *_updateItems;
  NSObject<_UICollectionViewUpdateTranslating> *_updateTranslator;
  _UIDataSourceSnapshotter *_finalDataSourceSnapshot;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleBounds;
}

/* instance methods */
@end

#endif /* _UICollectionCompositionalLayoutSolverUpdate_h */
