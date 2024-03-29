//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUIApplicationIconDownloadProgressView_h
#define CSLUIApplicationIconDownloadProgressView_h
@import Foundation;

#include "UIView.h"

@interface CSLUIApplicationIconDownloadProgressView : UIView {
  /* instance variables */
  double _displayedFraction;
  double _outerRadius;
  double _innerRadius;
  double _spaceRadius;
}

/* class methods */
+ (id)_pieImagesMemoryPoolForRadius:(double)radius;
+ (id)_pieImageAtFraction:(double)fraction outerRadius:(double)radius innerRadius:(double)radius spaceRadius:(double)radius;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame outerRadius:(double)radius;
- (void)updateDownloadProgress:(double)progress;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)_drawPieWithCenter:(struct CGPoint { double x0; double x1; })center;
@end

#endif /* CSLUIApplicationIconDownloadProgressView_h */
