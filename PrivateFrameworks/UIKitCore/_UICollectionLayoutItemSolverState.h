//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionLayoutItemSolverState_h
#define _UICollectionLayoutItemSolverState_h
@import Foundation;

#include "_UICollectionLayoutAuxillaryOffsets-Protocol.h"
#include "_UIRTree.h"

@class NSArray, NSDictionary, NSString;

@interface _UICollectionLayoutItemSolverState : NSObject {
  /* instance variables */
  NSArray *_itemFrames;
  NSArray *_auxillaryFrames;
  NSDictionary *_supplementaryDictByKindIndex;
  NSObject<_UICollectionLayoutAuxillaryOffsets> *_supplementaryFrameOffsets;
  _UIRTree *_geometricIndexer;
  NSArray *_solutionFrames;
  long long _itemFrameCount;
  long long _supplementaryFrameCount;
  NSArray *_preferredSizeGroupingRanges;
  NSString *_errorDescription;
  struct CGPoint { double x; double y; } _additionalOffsetForOutermostGroup;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _solvedFittingFrame;
}

/* instance methods */
@end

#endif /* _UICollectionLayoutItemSolverState_h */
