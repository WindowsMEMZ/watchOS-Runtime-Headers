//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFlowLayoutItem_h
#define _UIFlowLayoutItem_h
@import Foundation;

#include "_UIFlowLayoutRow.h"
#include "_UIFlowLayoutSection.h"

@interface _UIFlowLayoutItem : NSObject {
  /* instance variables */
  struct { unsigned int x :1 sizeEstimated; unsigned int x :1 positionEstimated; unsigned int x :1 sizeHasBeenSet; } _itemFlags;
  _UIFlowLayoutSection *_section;
  _UIFlowLayoutRow *_rowObject;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _itemFrame;
}

/* instance methods */
- (id)copy;
@end

#endif /* _UIFlowLayoutItem_h */
