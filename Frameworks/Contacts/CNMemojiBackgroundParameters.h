//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNMemojiBackgroundParameters_h
#define CNMemojiBackgroundParameters_h
@import Foundation;

#include "CNMemojiBackgroundColor.h"

@interface CNMemojiBackgroundParameters : NSObject

@property (copy, nonatomic) CNMemojiBackgroundColor *contentColor;

/* class methods */
+ (id)defaultBackgroundColorDescription;

/* instance methods */
- (id)initWithColorDescription:(id)description;
- (long long)numberOfLayers;
- (long long)numberOfColorsForLayer:(long long)layer;
- (id)colorAtIndex:(long long)index forLayer:(long long)layer;
- (id)backgroundLayerColorForIndex:(long long)index;
- (id)colorLayerColorForIndex:(long long)index;
- (id)topGradientLayerColorForIndex:(long long)index;
- (double)locationForColorAtIndex:(long long)index forLayer:(long long)layer;
- (struct CGPoint { double x0; double x1; })startPointForLayerAtIndex:(long long)index;
- (struct CGPoint { double x0; double x1; })endPointForLayerAtIndex:(long long)index;
- (id)description;
@end

#endif /* CNMemojiBackgroundParameters_h */
