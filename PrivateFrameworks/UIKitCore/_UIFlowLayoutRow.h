//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFlowLayoutRow_h
#define _UIFlowLayoutRow_h
@import Foundation;

#include "_UIFlowLayoutSection.h"

@class NSMutableArray;

@interface _UIFlowLayoutRow : NSObject {
  /* instance variables */
  BOOL _isValid;
  BOOL _complete;
  int _verticalAlignement;
  int _horizontalAlignement;
  BOOL _fixedItemSize;
  _UIFlowLayoutSection *_section;
  long long _index;
  NSMutableArray *_items;
  double _availableSpace;
  struct CGSize { double width; double height; } _rowSize;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rowFrame;
}

/* instance methods */
- (id)init;
@end

#endif /* _UIFlowLayoutRow_h */
