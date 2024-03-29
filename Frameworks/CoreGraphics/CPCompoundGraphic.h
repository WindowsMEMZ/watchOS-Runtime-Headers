//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.2.3.0.0
//
#ifndef CPCompoundGraphic_h
#define CPCompoundGraphic_h
@import Foundation;

#include "CPGraphicObject.h"

@interface CPCompoundGraphic : CPGraphicObject
/* instance methods */
- (id)initWithGraphicObjects:(id)objects withRenderedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)accept:(id)accept;
@end

#endif /* CPCompoundGraphic_h */
