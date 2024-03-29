//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIGraphicsPDFRenderer_h
#define UIGraphicsPDFRenderer_h
@import Foundation;

#include "UIGraphicsRenderer.h"

@interface UIGraphicsPDFRenderer : UIGraphicsRenderer
/* class methods */
+ (Class)rendererContextClass;
+ (struct CGContext *)contextWithFormat:(id)format;
+ (void)prepareCGContext:(struct CGContext *)cgcontext withRendererContext:(id)context;

/* instance methods */
- (void)pushContext:(id)context;
- (void)popContext:(id)context;
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds format:(id)format;
- (BOOL)writePDFToURL:(id)url withActions:(id /* block */)actions error:(id *)error;
- (id)PDFDataWithActions:(id /* block */)actions;
@end

#endif /* UIGraphicsPDFRenderer_h */
