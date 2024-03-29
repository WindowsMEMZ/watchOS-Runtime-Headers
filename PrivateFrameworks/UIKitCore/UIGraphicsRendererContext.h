//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIGraphicsRendererContext_h
#define UIGraphicsRendererContext_h
@import Foundation;

#include "UIGraphicsRendererFormat.h"

@interface UIGraphicsRendererContext : NSObject {
  /* instance variables */
  struct CGContext * _backingContext;
}

@property (nonatomic) BOOL __createsImages;
@property (readonly, nonatomic) struct CGContext * CGContext;
@property (readonly, nonatomic) UIGraphicsRendererFormat *format;

/* instance methods */
- (id)initWithCGContext:(struct CGContext *)cgcontext format:(id)format;
- (void)dealloc;
- (void)fillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)fillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect blendMode:(int)mode;
- (void)strokeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)strokeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect blendMode:(int)mode;
- (void)clipToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* UIGraphicsRendererContext_h */
