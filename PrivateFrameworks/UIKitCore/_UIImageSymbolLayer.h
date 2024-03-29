//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIImageSymbolLayer_h
#define _UIImageSymbolLayer_h
@import Foundation;

#include "UIColor.h"
#include "UIImageAsset.h"
#include "_UIImageCUIVectorGlyphContent.h"

@class NSString;

@interface _UIImageSymbolLayer : NSObject

@property (retain, nonatomic) UIImageAsset *asset;
@property (retain, nonatomic) _UIImageCUIVectorGlyphContent *content;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) struct CGPoint { double x0; double x1; } offset;
@property (nonatomic) double scaleFactor;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL systemImage;

/* class methods */
+ (id)_symbolLayerWithImage:(id)image color:(id)color offset:(struct CGPoint { double x0; double x1; })offset scaleFactor:(double)factor;
+ (id)_symbolLayerWithSystemName:(id)name color:(id)color;
+ (id)_symbolLayerWithSystemName:(id)name color:(id)color offset:(struct CGPoint { double x0; double x1; })offset scaleFactor:(double)factor;
+ (id)_symbolLayerWithName:(id)name color:(id)color;
+ (id)_symbolLayerWithName:(id)name color:(id)color offset:(struct CGPoint { double x0; double x1; })offset scaleFactor:(double)factor;

/* instance methods */
- (BOOL)isSystemImage;
@end

#endif /* _UIImageSymbolLayer_h */
