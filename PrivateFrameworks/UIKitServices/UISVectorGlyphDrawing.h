//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISVectorGlyphDrawing_h
#define UISVectorGlyphDrawing_h
@import Foundation;

#include "UISDrawing-Protocol.h"

@class NSString;

@interface UISVectorGlyphDrawing : NSObject<UISDrawing> {
  /* instance variables */
  struct CGImage * _image;
  struct CGColor * _tintColor;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageFrame;
  struct CGSize { double width; double height; } _size;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRect;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawingSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVectorGlyph:(id)glyph tintColor:(struct CGColor *)color;
- (void)dealloc;
- (void)drawInContext:(struct CGContext *)context atPoint:(struct CGPoint { double x0; double x1; })point;
@end

#endif /* UISVectorGlyphDrawing_h */
